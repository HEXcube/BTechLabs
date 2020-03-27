/*Use new operator to create a string and find its length*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

#define M 100

void main()
{
 unsigned int length;
 clrscr();

 char* temp = new char [M];
 cout<<"Enter the string : \n";
 cin.getline(temp,M);

 for(length=0;temp[length]!='\0';length++);   //to find length of string

 char* str = new char [length+1];
 strcpy(str,temp);
 delete temp;

 cout<<"\nDynamically created array is \""<<str<<"\" and"
     <<"\nLength of \""<<str<<"\" is "<<length<<".\n";

 getch();
}

/*OUTPUT
Enter the string :
Multiplayer games are the best!

Dynamically created array is "Multiplayer games are the best!" and
Length of "Multiplayer games are the best!" is 31.
*/