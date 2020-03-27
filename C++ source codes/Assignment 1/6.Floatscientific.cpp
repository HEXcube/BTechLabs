//To display a real number in scientific notation with sign

#include<iostream.h>
#include<conio.h>

void main()
{
 float f;
 clrscr();
 
 cout<<"Enter a fractional number : ";
 cin>>f;
 cout<<"\nThe number entered in normal form :"<<f<<endl;
 cout.setf(ios::scientific,ios::floatfield);
 cout<<"\nThe number in scientific notation with sign : "<<f;

 getch();
}