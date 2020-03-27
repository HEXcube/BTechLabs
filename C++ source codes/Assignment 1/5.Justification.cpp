//Display a message in different justifications

#include<iostream.h>
#include<conio.h>
#define W 10

void main()
{
 char message[10]="OUTPUT";
 clrscr();

 cout<<"Normal output without setting any justification :\n";
 cout.width(W);
 cout<<message<<'\n';

 cout.setf(ios::left,ios::adjustfield);
 cout<<"Output after left justification :\n";
 cout.width(W);
 cout<<message<<'\n';

 cout.setf(ios::right,ios::adjustfield);
 cout<<"Output after right justification:\n";
 cout.width(W);
 cout<<message<<'\n';

 cout<<"\nNote that width of Output field is set to "<<W;
 
 getch();
}