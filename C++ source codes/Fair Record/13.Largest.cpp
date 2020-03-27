/*Use class integer and find the largest out of 10 Integer*/

#include <iostream.h>
#include <conio.h>
#include <limits.h>


class Integer
{
 unsigned int Num;
 int tmp,Largest;

 public:
 void count();
 void accept();
 void display();
};

void Integer::count()
{
 cout<<"How many Integers do you want to input"
       "\n(Should be >= 10) : ";
 cin>>Num;
 while(Num<10)
 {
  cout<<"You must input more than 10 Integers!\n"
	"Enter again : ";
  cin>>Num;
 }
}

void Integer::accept()
{
 Largest = INT_MIN;
 cout<<"\nEnter "<<Num<<" numbers-\n";
 for(int i=0;i<Num;i++)
 {
  cout<<"Enter number "<<i+1<<" : ";
  cin>>tmp;
  if(tmp>Largest)
   Largest = tmp;
 }
}

void Integer::display()
{
 cout<<"\nThe largest among the entered numbers is : "<<Largest;
}

void main()
{
 Integer N;
 clrscr();
 
 N.count();
 N.accept();
 N.display();
 
 getch();
}

/*OUTPUT
How many Integers do you want to input
(Should be >= 10) : 10

Enter 10 numbers-
Enter number 1 : 13
Enter number 2 : 34
Enter number 3 : -90
Enter number 4 : -2
Enter number 5 : 34
Enter number 6 : 156
Enter number 7 : 32767
Enter number 8 : -234
Enter number 9 : 23
Enter number 10 : 128

The largest among the entered numbers is : 32767
*/