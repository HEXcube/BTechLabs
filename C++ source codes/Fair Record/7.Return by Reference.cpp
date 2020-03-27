/*Create a function to return the maximum of two numbers by reference*/

#include<iostream.h>
#include<conio.h>

int& return_by_reference(int&,int&);

void main()
{
 int x,y;
 clrscr();

 cout<<"Enter two numbers : ";
 cin>>x>>y;

 int& z=return_by_reference(x,y);
 //chair and table are passed by reference

 cout<<"\nGreater number is "<<z;

 getch();
}

int& return_by_reference(int &a,int &b)
{
 if(a>b)
    return a;
 else
    return b;//proper returning using return keyword
}

/*OUTPUT
Enter two numbers : 99 32767

Greater number is 32767
*/