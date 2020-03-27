/*Accept at least 10 positive and negative numbers.Count positive and
  negative numbers*/

#include <iostream.h>
#include <conio.h>

class Numbers
{
 unsigned int Pos,Neg,Num;
 int tmp;

 public:
 void count();
 void accept();
 void display();
};

void Numbers::count()
{
 cout<<"How many numbers do you want to input?"
       "\n(Should be >= 10) : ";
 cin>>Num;
 while(Num<10)
 {
  cout<<"You must input more than 10 numbers!\n"
	"Enter again : ";
  cin>>Num;
 }
}

void Numbers::accept()
{
 Pos=0;
 Neg=0;
 cout<<"\nEnter "<<Num<<" positive as well as negative numbers-\n";
 for(int i=0;i<Num;i++)
 {
  cout<<"Enter number "<<i+1<<" : ";
  cin>>tmp;
  tmp<0?Neg++:Pos++;
 }
}

void Numbers::display()
{
 cout<<"\nYou entered "<<Pos<<" positive numbers and \n"
     <<Neg<<" negative numbers.";
}

void main()
{
 Numbers N;
 clrscr();
 
 N.count();
 N.accept();
 N.display();
 
 getch();
}

/*OUTPUT
How many numbers do you want to input?
(Should be >= 10) : 10

Enter 10 positive as well as negative numbers-
Enter number 1 : 12
Enter number 2 : 34
Enter number 3 : -12
Enter number 4 : 23
Enter number 5 : 67
Enter number 6 : 34
Enter number 7 : 98
Enter number 8 : -45
Enter number 9 : 13
Enter number 10 : -56

You entered 7 positive numbers and
3 negative numbers.
*/