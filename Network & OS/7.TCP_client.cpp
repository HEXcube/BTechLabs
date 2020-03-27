#include<iostream>
#include<stdio.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<netdb.h>
#include<sys/socket.h>
#include<string.h>
int main()
{
int clientsocket;
char message[50],message1[50];
sockaddr_in serveraddr;
hostent * server;
clientsocket=socket(AF_INET,SOCK_STREAM,0);
bzero((char*) &serveraddr,sizeof(serveraddr));
serveraddr.sin_family=AF_INET;
serveraddr.sin_port=htons(5015);
server=gethostbyname("127.0.0.1");
bcopy((char*)server->h_addr,(char*)&serveraddr.sin_addr.s_addr,sizeof(server->h_addr));
printf("\n trying to connect to the server \n");
connect(clientsocket,(sockaddr*)&serveraddr,sizeof(serveraddr));
printf("\n connected to server \n");
while(true)
{
printf("\n get the message\n");
gets(message1);
write(clientsocket,message1,sizeof(message1));
printf("\n sending message\n");
read(clientsocket,message,sizeof(message));
printf("message is\n");
printf("%s",message);
}
close(clientsocket);
}