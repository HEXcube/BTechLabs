/*Declare a class with private data member and a static member function.
  Read and display the values*/

#include <iostream.h>
#include <conio.h>

class Secure
{
 static int a;

 public:
 static void accept();
 void display();
};
int Secure::a = 10;

void Secure::accept()
{
 cout<<"Enter a number : ";
 cin>>a;
}

void Secure::display()
{
 cout<<"The static data member's value : "<<a;
}

void main()
{
 Secure S;
 clrscr();

 Secure::accept();       //Static methods could be accessed from class scope
 S.display();
 
 getch();
}

/*OUTPUT
Enter a number : 5
The static data member's value : 5
*/