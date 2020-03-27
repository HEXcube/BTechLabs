/*Create a class integer with an integer array.Use necessary constructors
  to initialize, and compute the sum of all digits,sum of even and odd
  numbers*/

#include<iostream.h>
#include<conio.h>

#define M 50

class integer
{
 int Array[M];
 unsigned int lim;
 long Sum,OddSum,EvenSum;
public:
 integer();
 void allsum();
 void oddsum();
 void evensum();
};

 integer::integer()
 {
  cout<<"How many numbers do you want to enter : ";
  cin>>lim;
  cout<<"Enter the numbers-\n";
  for(unsigned int i=0 ; i<lim ; i++ )
  {
   cout<<"Number "<<i+1<<" : ";
   cin>>Array[i];
  }
 }

 void integer::allsum()
 {
  Sum=0;
  for(unsigned int i=0 ; i<lim ; i++ )
     Sum = Sum + Array[i];
  cout<<"\nSum of all numbers : "<<Sum;
 }

 void integer::oddsum()
 {
  OddSum=0;
  for(unsigned int i=0 ; i<lim ; i++ )
  if(Array[i]%2!=0)
   OddSum = OddSum + Array[i];
  cout<<"\nSum of odd numbers : "<<OddSum;
 }

 void integer::evensum()
 {
  EvenSum=0;
  for(unsigned int i=0 ; i<lim ; i++ )
  if(Array[i]%2==0)
   EvenSum = EvenSum + Array[i];
  cout<<"\nSum of even numbers : "<<EvenSum;
 }

void main()
{
 clrscr();
 integer Int;

 Int.allsum();
 Int.oddsum();
 Int.evensum();

 getch();
}

/*OUTPUT
How many numbers do you want to enter : 4
Enter the numbers-
Number 1 : 23
Number 2 : 45
Number 3 : 14
Number 4 : 56

Sum of all numbers : 138
Sum of odd numbers : 68
Sum of even numbers : 70
*/