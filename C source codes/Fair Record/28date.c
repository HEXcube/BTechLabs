/*Program to accept today's date and print tomorrow's date.*/

typedef struct
{
 unsigned int day;
 unsigned int month;
 unsigned int year;
} date;

typedef union
{
 date today;
 date tommorow;
} dates;

void main()
{
 dates D;
 unsigned int m;                       //m is the number of days in a month
 clrscr();

 printf("Enter today's date-\n");
 printf("Day   : ");scanf("%u",&D.today.day);
 printf("Month : ");scanf("%u",&D.today.month);
 printf("Year  : ");scanf("%u",&D.today.year);

 D.today.day++;             //tommorow and today are stored at the same location
 switch(D.today.month)
 {
  case 1 :
  case 3 :
  case 5 :
  case 7 :
  case 8 :
  case 10:
  case 12:m=31;
	   break;
  case 2 :m=29;
	   break;
  case 4 :
  case 6 :
  case 9 :
  case 11:
  default :m=30;
 }

 if(D.tommorow.day>m)
 {
  D.tommorow.month+=D.tommorow.day/m;    //to find the change of month
  D.tommorow.day%=m;
 }
 if(D.tommorow.month>12)
 {
  D.tommorow.year+=D.tommorow.month/12;  //to find the change of year
  D.tommorow.month%=12;
 }

 printf("\nTommorow's date-\n"
        "%u-%u-%u\n",D.tommorow.day,D.tommorow.month,D.tommorow.year);

 printf("\nPress any key....");
 getch();
 }

/*OUTPUT
Enter today's date-
Day   : 31
Month : 12
Year  : 2019

Tommorow's date-
1-1-2020

Press any key....
*/