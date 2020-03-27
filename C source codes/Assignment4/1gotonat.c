/*Program to find the sum of natural numbers in given range*/
void main()
{
unsigned long s=0;       //s is the sum of digits of given number.
unsigned int n=0,lim;    //n is the loop control variable and lim is the limit
clrscr();
printf("Enter the limit");
scanf("%u",&lim);
target:
if(n<=lim)
{
s=s+n;
n++;
goto target;
}
printf("The sum of the numbers is :%lu",s);
getch();
}