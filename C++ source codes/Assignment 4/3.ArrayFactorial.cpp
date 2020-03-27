/*Create a class integer with an array of integers use constructors new and
delete.Find factorial*/

#include<iostream.h>
#include<conio.h>

class integer
{
 int* dyp;
 unsigned int lim;
public:
 integer();
 void ArrayProcess();
 unsigned long factorial(int);
};

 integer::integer()
 {
  cout<<"How many numbers do you want to enter : ";
  cin>>lim;
  dyp=new int[lim];
  cout<<"Enter the numbers-\n";
  for(unsigned int i=0 ; i<lim ; i++ )
  {
   cout<<"Number "<<i+1<<" : ";
   cin>>dyp[i];
  }
 }

void integer::ArrayProcess()
{
for(unsigned int i=0;i<lim;i++)
 {
  cout<<"\nFactorial of "<<i+1<<" th number is"<<factorial(dyp[i]);
 }
}


unsigned long integer::factorial(int num)
 {
  if(num==0 || num==1)
  {
   return 1;
  }
  else
  {
  return num*factorial(num-1);
  }
 }


void main()
{
 clrscr();
 integer Int;

 Int.ArrayProcess();

 getch();
}

/*OUTPUT
How many numbers do you want to enter : 5
Enter the numbers-
Number 1 : 4
Number 2 : 6
Number 3 : 7
Number 4 : 8
Number 5 : 13

Factorial of 1 th number is24
Factorial of 2 th number is720
Factorial of 3 th number is5040
Factorial of 4 th number is40320
Factorial of 5 th number is1932053504
*/
