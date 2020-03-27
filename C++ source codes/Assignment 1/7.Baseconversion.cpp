//To convert decimal to hexadecimal to octal

#include<iostream.h>
#include<conio.h>

void main()
{
 unsigned long int n;
 clrscr();
 
 cout<<"Enter a number with decimal base : ";
 cin>>n;
 cout<<"\nThe number entered in decimal    : "<<n<<endl;
 cout.setf(ios::hex,ios::basefield);
 cout<<"\nThe number entered in hexadecimal: "<<n<<endl;
 cout.setf(ios::oct,ios::basefield);
 cout<<"\nThe number entered in octal      : "<<n<<endl;
 
 getch();
}