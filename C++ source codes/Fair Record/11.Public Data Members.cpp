/*Program to declare a class with 3 integer public data variables,
initialize and display them*/

#include <iostream.h>
#include <conio.h>

class Simple
{
 public:
 int a,b,c;
 Simple(int x,int y,int z)      //Constructor to initialize Simple class
 {
    a = x;
    b = y;
    c = z;
 }
};

void main()
{
 int x,y,z;
 clrscr();
 
 cout<<"Enter three numbers : ";
 cin>>x>>y>>z;
 Simple S(x,y,z);           //S initialized using constructor
 cout<<"The three numbers are : ";
 cout<<S.a<<'\t'<<S.b<<'\t'<<S.c;
 
 getch();
}

/*OUTPUT
Enter three numbers : 1 2 3
The three numbers are : 1       2       3
*/