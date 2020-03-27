/*Program to check whether the inputed year is a leap year or not*/
void main()
{
unsigned int y;
clrscr();
printf("Enter the year : ");
scanf("%u",&y);
if(y%4)
printf("%u is not a leap year.",y);
else
printf("%u is a leap year.",y);
getch();
}