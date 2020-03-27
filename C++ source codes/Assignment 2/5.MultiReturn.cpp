/*Program to return more than one value from a function */

#include<iostream.h>
#include<conio.h>

int pass_by_reference(int &a,int &b,int c);

void main()
{
 int chair,table,pairs,sum;
 clrscr();

 cout<<"Enter the  number of chairs in your class : ";
 cin>>chair;

 cout<<"Enter the  number of tables in your class : ";
 cin>>table;

 sum=chair+table;

 cout<<"Total number of chairs and tables in your class : "<<sum<<endl;
 cout<<"\nHow many pairs of chairs and tables do you"
       "\nwant to buy : ";
 cin>>pairs;

 sum=pass_by_reference(chair,table,pairs);
 //chair and table are passed by reference

 cout<<"\nNumber of chairs after getting "<<pairs
     <<" chairs : "<<chair;

 cout<<"\nNumber of tables after getting "<<pairs
     <<" tables : "<<table;

 cout<<"\nTotal number of chairs and tables after getting\n"<<pairs
     <<" pairs of chairs and tables : "<<sum;

 getch();
}

int pass_by_reference(int &a,int &b,int c)
{
 /*Here a and b are passed as reference variables of
   chair and table
   so any change in a and b will be reflected in chair
   and table of calling function
   Hence pass by reference can also be multiple value return */

 a+=c;        //chair is changed/returned
 b+=c;        //table is changed/returned
 return a+b;  //proper returning using return keyword
}

/*OUTPUT
Enter the  number of chairs in your class : 20
Enter the  number of tables in your class : 10
Total number of chairs and tables in your class : 30

How many pairs of chairs and tables do you
want to buy : 5

Number of chairs after getting 5 chairs : 25
Number of tables after getting 5 tables : 15
Total number of chairs and tables after getting
5 pairs of chairs and tables : 40
*/

