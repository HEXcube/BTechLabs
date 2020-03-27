//Read and display a string using read() and write()

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
 char string[50]="\0";
 unsigned int len;
 clrscr();

 cout<<"Enter the length of string : ";cin>>len;
 cout<<"Enter the string : ";
 cin.read(string,++len);
 string[len]='\0';

 cout<<"The string entered is :";
 cout.write(string,strlen(string));
 cout<<flush;

 getch();
}