/*Program to use macros and inlines to calculate square of
  a number */

#include<iostream.h>
#include<conio.h>

#define SQUARE(a) a*a

inline int square(int);

void main()
{
 int num;
 clrscr();

 cout<<"Enter a number : ";
 cin>>num;

 cout<<"Value of square using macro : "<<SQUARE(num)<<endl;

 cout<<"Value of square using inline function : "<<square(num);

 getch();
}

int square(int a)
{
 return a*a;
}