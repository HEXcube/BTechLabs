/*Program to generate n numbers of fibanacci series*/

void main()
{
unsigned int n,i=1;
unsigned long a=0,b=1,c=0;
clrscr();
printf("Enter the limit : ");
scanf("%u",&n);
printf("\nThe fibonacci series for %u is :\n%lu\t%lu",n,a,b);
while(i<n)
{
 c=a+b;
 a=b;
 b=c;
 i++;
 printf("\t%lu",c);
}
printf("\nPress any key..... ");
getch();
}