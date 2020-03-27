/*Define a local class. Also define a global variable with same name as that of member
  variable. Read and display the data for global and data member.*/

#include <iostream.h>
#include <conio.h>

int x = 0;   //global variable x

class Test
{
 public:
 static int x;       //class data member x
};
int Test::x = 0;

void main()
{
 int x=0;            //local variable x
 clrscr();
 
 cout<<"Enter the value for global variable  : ";
 cin>>::x;
 cout<<"Enter the value for local variable   : ";
 cin>>x;
 cout<<"Enter the value for class data member: ";
 cin>>Test::x;

 cout<<"\nGlobal variable's value   : "<<::x
     <<"\nLocal variable's value    : "<<x
     <<"\nClass data member's value : "<<Test::x;

 getch();
}

/*OUTPUT
Enter the value for global variable  : 10
Enter the value for local variable   : 20
Enter the value for class data member: 30

Global variable's value   : 10
Local variable's value    : 20
Class data member's value : 30
*/