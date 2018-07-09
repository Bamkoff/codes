#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <errno.h>

#define TEXT_SIZE 512

struct shared_data {
  int data;
  char some_text[TEXT_SIZE];
};
struct shared_data *ptr;
int text_send(char *text)
{
  while(ptr->data==0) sleep(2);
  sprintf(ptr->some_text,"%s",text);
  ptr->data = 0;
  if(strncmp(text,"quit",4)==0) return 1;
  else return 0;

}

int main() {
  char tekst[TEXT_SIZE];
  
  const char *shm_name = "s123456";
  int shm_fd;
  shm_fd = shm_open(shm_name, O_CREAT | O_RDWR, 0666);

  ftruncate(shm_fd, sizeof(struct shared_data));

  ptr = mmap(0, sizeof(struct shared_data), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
  if (ptr == MAP_FAILED) {
    printf("mmap - failed.\n");
    return -1;
  }
  /*program*/
  int quit = 0;
  ptr->data = 1;
  do{
	 fgets(tekst,512,stdin);
     memset(ptr->some_text,0,512);
	 quit = text_send(tekst);
	}while(quit==0);

  if (munmap(ptr, sizeof(struct shared_data)) == -1) {
    printf("unmap failed: %s\n", strerror(errno));
    exit(1);
  }

  if (close(shm_fd)) {
    printf("close failed: %s", strerror(errno));
    exit(1);
  }

  return 0;

}
