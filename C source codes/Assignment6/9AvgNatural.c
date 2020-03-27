/*Program to find the sum of natural numbers in given range*/
void main()
{
unsigned long s=0;       //s is the sum of digits of given number.
unsigned int n=0,lim;    //n is the loop control variable and lim is the limit
clrscr();
printf("Enter the limit : ");
scanf("%u",&lim);
do
{
s=s+n;
n++;
}while(n<=lim);
printf("The average of the natural numbers upto %u is : %f",lim,(float)s/lim);
printf("\nPress any key.....");
getch();
}