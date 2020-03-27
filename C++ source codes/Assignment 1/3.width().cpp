//Use both formats of width() function

#include<iostream.h>
#include<conio.h>
#define W 5

void main()
{
 clrscr();
 
 cout<<"Initial value of width unset : "<<cout.width()<<'\n'; //Form 1
 cout<<"Normal output without setting width():"<<64<<'\n';
 cout<<"Output after setting width to "<<W<<"      :";
 cout.width(W);         //Form 2
 cout<<64;

 getch();
}