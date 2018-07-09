#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <mqueue.h>
#include <sys/stat.h>
#include <sys/wait.h>

#define MESSAGE_COUNT 10
#define TEXT_SIZE 130

struct message {
  char mtext[TEXT_SIZE];
};


int main(int argc, char *argv[]) {
  const char *queue_name = "/queue";
  char tekst[TEXT_SIZE];
  struct mq_attr message_attr = {.mq_maxmsg = MESSAGE_COUNT, .mq_msgsize = sizeof(struct message) };

  mqd_t mqid = mq_open(queue_name,  O_RDONLY, 0666, &message_attr);

  if (mqid == (mqd_t) -1) {
    perror("mq_open"); exit(1);
  }

  do {
    unsigned int priority;
    struct message msg;
    int len;
	int i;
	for(i=0;i<1000000;i++)
	{
		len = mq_receive(mqid, (char *) &msg,sizeof(msg), &priority);
		if (len == -1) {
		  perror("mq_receive");
		  break;
		}
		sprintf(tekst,"%s", msg.mtext);
	}
    int r = mq_getattr(mqid, &message_attr);
    if (r == -1) {
      perror("mq_getattr");
      break;
    }
  } while (message_attr.mq_curmsgs);

  mq_close(mqid);
  mq_unlink(queue_name);
  return 0;
}
