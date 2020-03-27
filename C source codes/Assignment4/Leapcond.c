/*Program to check whether a year is leap year or not using conditional operator*/

void main()
{
int y;            //y is the year to be checked
clrscr();
printf("Enter a year : ");
scanf("%d",&y);
(y%4==0) ? printf("\n%d is a leap year.",y) : printf("\n%d is yot a leap year.",y);
getch();
}