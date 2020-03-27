/*Program to find the sum of the series 2+4+6+.....+n*/

void main()
{
unsigned int lim,i=0;
unsigned long s=0;            //s is the sum of the series
clrscr();
printf("Enter the limit(an even value) : ");
scanf("%u",&lim);
if(lim%2)
{
 printf("The limit is not an even number");
 getch();
 exit(0);
}
while(i<lim)
{
 i+=2;
 s+=(i);
}
printf("The sum of the series 2+4+6+......+%u is %lu",lim,s);
printf("\nPress any key..... ");
getch();
}