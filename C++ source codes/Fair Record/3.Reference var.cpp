/*Create a reference variable. Display values by changes in actual
  and reference variable*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int a=10;
 int &b=a;
 clrscr();
 
 cout<<"\nActual variable's value    : "<<a
     <<"\nReference variable's value : "<<b<<endl;

 b-=2;
 cout<<"\nAfter decrementing reference variable's value by 2 -"
     <<"\nActual variable's value    : "<<a
     <<"\nReference variable's value : "<<b;

 getch();
}

/*OUTPUT

Actual variable's value    : 10
Reference variable's value : 10

After decrementing reference variable's value by 2 -
Actual variable's value    : 8
Reference variable's value : 8
*/