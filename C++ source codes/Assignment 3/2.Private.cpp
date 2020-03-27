/*Program to declare a class with private  data members and public
 member functions.Read and display the data members*/

#include <iostream.h>
#include <conio.h>

class Secure
{
 int a,b,c;
 
 public:
 void accept();
 void display();
};

void Secure::accept()
{
 cout<<"Enter three numbers : ";
 cin>>a>>b>>c;
}

void Secure::display()
{
 cout<<"The three numbers are : ";
 cout<<a<<'\t'<<b<<'\t'<<c;
}

void main()
{
 Secure S;
 clrscr();
 
 S.accept();
 S.display();
 
 getch();
}

/*OUTPUT
Enter three numbers : 1 2 3
The three numbers are : 1       2       3
*/