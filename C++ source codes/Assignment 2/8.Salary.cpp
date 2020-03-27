/*An employee gets a salary of Rs.20 for the 1st day.For each subsequent
  day the salary gets doubled.What is the sum of all the salaries that
  the employee gets at the end of 31 days*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

#define DAYS 31
#define BASEPAY 2

void main()
{
 unsigned long salary[DAYS];
 long double sum=BASEPAY;       //Base Pay is actually 20
 clrscr();
 
 salary[0]=BASEPAY;
 cout<<"Salary for day 1(Basic Pay) : Rs."<<BASEPAY<<"0\n";
 for(int i = 1;i<DAYS;i++)
  {
   salary[i]=salary[i-1]*2;
   sum+=salary[i];
   cout<<"Salary for day "<<setw(3)<<i+1<<" : Rs."<<salary[i]<<"0\n";
  }
 cout.setf(ios::fixed,ios::floatfield);
 cout.precision(0);
 cout<<"\nTotal Salary : Rs."<<sum<<"0\n"; //0 is displayed to correct BASEPAY
 getch();
}
/*OUTPUT
Salary for day 1(Basic Pay) : Rs.20
Salary for day   2 : Rs.40
Salary for day   3 : Rs.80
Salary for day   4 : Rs.160
Salary for day   5 : Rs.320
Salary for day   6 : Rs.640
Salary for day   7 : Rs.1280
Salary for day   8 : Rs.2560
Salary for day   9 : Rs.5120
Salary for day  10 : Rs.10240
Salary for day  11 : Rs.20480
Salary for day  12 : Rs.40960
Salary for day  13 : Rs.81920
Salary for day  14 : Rs.163840
Salary for day  15 : Rs.327680
Salary for day  16 : Rs.655360
Salary for day  17 : Rs.1310720
Salary for day  18 : Rs.2621440
Salary for day  19 : Rs.5242880
Salary for day  20 : Rs.10485760
Salary for day  21 : Rs.20971520
Salary for day  22 : Rs.41943040
Salary for day  23 : Rs.83886080
Salary for day  24 : Rs.167772160
Salary for day  25 : Rs.335544320
Salary for day  26 : Rs.671088640
Salary for day  27 : Rs.1342177280
Salary for day  28 : Rs.2684354560
Salary for day  29 : Rs.5368709120
Salary for day  30 : Rs.10737418240
Salary for day  31 : Rs.21474836480

Total Salary : Rs.42949672940
*/
