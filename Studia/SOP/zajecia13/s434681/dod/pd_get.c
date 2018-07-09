#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <errno.h>

#define TEXT_SIZE 128


struct shared_data {
  int data;
  char some_text[TEXT_SIZE];
};
struct shared_data *ptr;

int main(void)
{
  char tekst[TEXT_SIZE];
  
  const char *shm_name = "s123456";
  int shm_fd;
  shm_fd = shm_open(shm_name, O_RDWR, 0666);

  ptr = mmap(0, sizeof(struct shared_data), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
  if (ptr == MAP_FAILED) {
    printf("mmap - failed.\n");
    return -1;
  }

//wait for data
	int i;
	for(i=0;i<1000000;i++)
	{
		while(ptr->data==1) usleep(1);
	    sprintf(tekst,"%s",ptr->some_text);
		ptr->data = 1;
	}

  if (munmap(ptr, sizeof(struct shared_data)) == -1) {
    printf("unmap failed: %s\n", strerror(errno));
    exit(1);
  }

  if (close(shm_fd)) {
    printf("close failed: %s", strerror(errno));
    exit(1);
  }

  /* remove the shared memory segment from the file system */
  if (shm_unlink(shm_name) == -1) {
    printf("cons: Error removing %s: %s\n", shm_name, strerror(errno));
    exit(1);
  }

  return 0;
}
