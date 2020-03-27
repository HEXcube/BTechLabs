/*Program to display different ways of calling/passing in functions
  1.Pass by value
  2.Pass by address  (C style pass by reference)
  3.Pass by reference(C++ style pass by reference)
*/

#include<iostream.h>
#include<conio.h>

void pass_by_val(int);
void pass_by_add(int*);
void pass_by_ref(int&);

void main()
{
 int S=0;
 clrscr();
 
 cout<<"Value of local variable  S : "<<S<<endl;

 pass_by_val(S);
 cout<<"Value of S after passing by value    : "<<S<<endl;

 pass_by_add(&S);
 cout<<"Value of S after passing by address  : "<<S<<endl;

 pass_by_ref(S);
 cout<<"Value of S after passing by reference: "<<S<<endl;

 getch();
}

void pass_by_val(int a)
{
 a++;
 cout<<"\nThe value of passed variable in call by value\n"
       "function after being incremented by one : "<<a<<endl;
}

void pass_by_add(int *a)
{
 (*a)++;
 cout<<"\nThe value of passed variable in call by address\n"
       "function after being incremented by one : "<<*a<<endl;
}

void pass_by_ref(int &a)
{
 a++;
 cout<<"\nThe value of passed variable in call by reference\n"
       "function after being incremented by one : "<<a<<endl;
}

/*OUTPUT
Value of local variable  S : 0

The value of passed variable in call by value
function after being incremented by one : 1
Value of S after passing by value    : 0

The value of passed variable in call by address
function after being incremented by one : 1
Value of S after passing by address  : 1

The value of passed variable in call by reference
function after being incremented by one : 2
Value of S after passing by reference: 2
*/