#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <mqueue.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>

#define MESSAGE_COUNT 10
#define TEXT_SIZE 50

char text_message[TEXT_SIZE];
char text_message2[TEXT_SIZE];

struct message {
  char mtext[TEXT_SIZE];
};

struct mq_attr message_attr = {
  .mq_maxmsg = MESSAGE_COUNT,
  .mq_msgsize = sizeof(struct message)
};
const char *queue_name = "/queue";

int main()
{
	mqd_t mqid = mq_open(queue_name,  O_CREAT | O_RDWR, 0666, &message_attr);
	if (mqid == (mqd_t) -1) 
	{
		perror("mq_open"); exit(1);
	}
	pid_t cpid1;
	cpid1 = fork();
	if(cpid1 == 0)
	{
		int i;
		int result;
		for(i=1;i<6;i++) 
		{
			sprintf(text_message, "%d", i);
			result = mq_send(mqid, text_message, strlen(text_message) + 1, 1);
			if (result == -1) 
			{
				perror("mq_send");
			}
		}
	}
		
	else
	{
		pid_t cpid2;
		cpid2 = fork();
		if(cpid2 == 0)
		{
			int x;
			int result2;
			for(x=11;x<16;x++)
			{
				sprintf(text_message2, "%d", x);
				result2 = mq_send(mqid, text_message2, strlen(text_message2) + 1, 2);
				if (result2 == -1) 
				{
					perror("mq_send");
				}
			}
		}
		else
		{
			unsigned int priority;
			struct message msg;
			int len;
			do 
			{
				sleep(1);
				len = mq_receive(mqid, (char *) &msg,sizeof(msg), &priority);
				if (len == -1) 
				{
					perror("mq_receive");
					break;
				}
				printf("(priorytet = %d): '%s'\n", priority, msg.mtext);
				int r = mq_getattr(mqid, &message_attr);
				if (r == -1) 
				{
					perror("mq_getattr");
					break;
				}
			} while (message_attr.mq_curmsgs);
			mq_close(mqid);
			mq_unlink(queue_name);
		}
	}
	return 0;
}
