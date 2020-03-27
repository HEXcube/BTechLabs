#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
struct msgq
{
int type;
char text[100];
}mq;
main()
{
int msqid,len;
msqid=msgget(2013,0644|IPC_CREAT);
printf("message queue id:%d\n",msqid);
printf("Enter the text\n");
mq.type=1;
while(fgets(mq.text,sizeof(mq.text),stdin)!=NULL)
{
len=strlen(mq.text);
if(mq.text[len-1]=='\n')
mq.text[len-1]='\0';
msgsnd(msqid,&mq,len+1,0);
msgrcv(msqid,&mq,sizeof(mq.text),0,0);
printf("from client:\"%s\"\n",mq.text);
}
msgctl(msqid,IPC_RMID,NULL);
}