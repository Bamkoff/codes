#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <mqueue.h>
#include <sys/stat.h>
#include <sys/wait.h>

#define MESSAGE_COUNT 10
#define TEXT_SIZE 130

char text_message[TEXT_SIZE];

struct message {
  char mtext[TEXT_SIZE];
};

struct mq_attr message_attr = {
  .mq_maxmsg = MESSAGE_COUNT,
  .mq_msgsize = sizeof(struct message)
};

const char *queue_name = "/queue";



int main(int argc, char *argv[]){
  mqd_t mqid = mq_open(queue_name,  O_CREAT | O_RDWR, 0666, &message_attr);
  if (mqid == (mqd_t) -1) {
    perror("mq_open"); exit(1);
  }

  int i;
  for (i=0; i<1000000; i++) {
    sprintf(text_message, "01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567");
    int result = mq_send(mqid, text_message, strlen(text_message), 1);
    if (result == -1) {
      perror("mq_send");
    }
    usleep(1);
  }

  mq_close(mqid);

  return 0;
}
