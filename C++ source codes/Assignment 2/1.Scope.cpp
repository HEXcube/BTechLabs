/*Program to display the various values of the same variable declared
 at different scope levels*/

#include<iostream.h>
#include<conio.h>

int x=10;  //global variable x

class test
{
 public: 
 int x; //class data member x
};

class trial
{
 public: 
 static int x; //static data member x
};
int trial::x = 40;

void main()
{
 int x=20; //local variable x
 test Obj;
 clrscr();
 Obj.x=30;
 
 cout<<"Value of local  x : "<<x<<endl
     <<"Value of global x : "<<::x<<endl
     <<"Value of object member x : "<<Obj.x<<endl    
     <<"Value of static class member x : "<<trial::x;
 
 getch();
}

/*OUTPUT
Value of local  x : 20
Value of global x : 10
Value of object member x : 30
Value of static class member x : 40
*/