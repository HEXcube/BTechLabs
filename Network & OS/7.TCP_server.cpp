#include<iostream>
#include<stdio.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<netdb.h>
#include<sys/socket.h>
#include<string.h>
int main()
{
int serversocket,clientsocket;
char message[50],message1[50];
sockaddr_in serveraddr,clientaddr;
socklen_t len;
serversocket=socket(AF_INET,SOCK_STREAM,0);
bzero((char*) &serveraddr,sizeof(serveraddr));
serveraddr.sin_family=AF_INET;
serveraddr.sin_port=htons(5015);
serveraddr.sin_addr.s_addr=INADDR_ANY;
bind(serversocket,(sockaddr*) &serveraddr,sizeof(serveraddr));
bzero((char*) &clientaddr,sizeof(clientaddr));
len=sizeof(clientaddr);
listen(serversocket,5);
printf("\n waiting for the connection \n");
clientsocket=accept(serversocket,(sockaddr*) &clientaddr,&len);
printf("\n connection obtained \n");
while(true)
{
printf("\n reading the message\n");
read(clientsocket,message,sizeof(message));
printf("%s",message);
printf("\n get the message \n");
gets(message1);
printf("\n sending the message \n");
write(clientsocket,message1,sizeof(message1));
}
close(clientsocket);
close(serversocket);
}