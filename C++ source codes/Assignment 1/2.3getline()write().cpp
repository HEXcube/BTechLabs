//Read and display a string using getline() and write()

#include<iostream.h>
#include<conio.h>
#include<string.h>

#define M 50

void main()
{
 char string[M]="\0";
 clrscr();

 cout<<"Enter the string : ";
 cin.getline(string,M);

 cout<<"The string entered is :";
 cout.write(string,strlen(string));
 cout<<flush;

 getch();
}