#include<iostream>
#include<stdio.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<netdb.h>
#include<sys/socket.h>
#include<string.h>
int main()
{
int serversocket;
char message[50],message1[50];
sockaddr_in serveraddr,clientaddr;
socklen_t len;
serversocket=socket(AF_INET,SOCK_DGRAM,0);
bzero((char*) &serveraddr,sizeof(serveraddr));
serveraddr.sin_family=AF_INET;
serveraddr.sin_port=htons(5015);
serveraddr.sin_addr.s_addr=INADDR_ANY;
bind(serversocket,(sockaddr*) &serveraddr,sizeof(serveraddr));
printf("\n waiting for the connection \n");
bzero((char*) &clientaddr,sizeof(clientaddr));
len=sizeof(clientaddr);
while(true)
{
recvfrom(serversocket,message,sizeof(message),0,(sockaddr*) &clientaddr,&len);
printf("\n connection recieved from client\n");
printf("the client has send:\t %s \n",message);
printf("\n get the message \n");
gets(message1);
printf("\n sending the message \n");
sendto(serversocket,message1,sizeof(message),0,(sockaddr*) &clientaddr,sizeof(clientaddr));
}
close(serversocket);
}