//Program to understand the use of precision()

#include<iostream.h>
#include<conio.h>

void main()
{
 int p;
 clrscr();
 
 cout<<"Initial value of precision unset : "<<cout.precision()<<'\n'; //Form 1
 cout<<"Normal output without setting precision():"<<22.0/7L<<'\n';

 for(p=10;p>=0;p--)
 {
 cout<<"\nOutput after setting width to "<<p<<"      :";
 cout.precision(p);         //Form 2
 cout<<22.0/7L<<endl;
 }
 
 getch();
}