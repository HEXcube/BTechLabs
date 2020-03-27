//Read and display a string using get and put

#include<iostream.h>
#include<conio.h>

#define M 30

void main()
{
 char string[M]="\0",i=0;
 clrscr();

 cout<<"Enter the string : ";
 cin.get(string[i]);
 while(string[i]!='\n' || i==M)
 cin.get(string[++i]);
 string[i]='\0';

 cout<<"The string entered is : "<<flush;
 i=0;
 while(string[i] || i==M)
 cout.put(string[i++]);
 cout<<flush;

 getch();
}