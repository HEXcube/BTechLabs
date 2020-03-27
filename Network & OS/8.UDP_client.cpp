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
socklen_t len;
hostent * server;
clientsocket=socket(AF_INET,SOCK_DGRAM,0);
bzero((char*) &serveraddr,sizeof(serveraddr));
len=sizeof(serveraddr);
serveraddr.sin_port=htons(5015);
server=gethostbyname("127.0.0.1");
bcopy((char*)server->h_addr,(char*)&serveraddr.sin_addr,sizeof(server->h_addr));
printf("\n press enter to start the connection \n");
fgets(message,2,stdin);
while(true)
{
printf("\n sending the message for server connection \n");
printf("\n get message \n");
gets(message1);
sendto(clientsocket,message1,sizeof(message1),0,(sockaddr*) &serveraddr,sizeof(serveraddr));
printf("\n receiving message from the server \n");
recvfrom(clientsocket,message,sizeof(message),0,(sockaddr*) &serveraddr,&len);
printf("message received:\t %s \n",message);
}
close(clientsocket);
}