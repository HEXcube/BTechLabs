/*Program to declare a class with private  data members and member
 functions.Also declare a public member function.Read and display the
 data using private functions*/

#include <iostream.h>
#include <conio.h>

class Secure
{
 int a,b,c;
 void accept();
 void display();

 public:
 void Access();
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

void Secure::Access()
{
 accept();
 display();
}

void main()
{
 Secure S;
 clrscr();
 
 S.Access();
 
 getch();
}

/*OUTPUT
Enter three numbers : 1 2 3
The three numbers are : 1       2       3
*/