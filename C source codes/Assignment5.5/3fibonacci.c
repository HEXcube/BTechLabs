/*Program to generate n numbers of fibanacci series*/

void main()
{
unsigned int n,i=1;
unsigned long a=0,b=1,c=0;
clrscr();
printf("Enter the limit : ");
scanf("%u",&n);
if(n==0)
{
printf("\nError!Limit cannot be 0.");
goto err;
}
printf("\nThe fibonacci series for %u is :\n%lu\t%lu",n,a,b);
do
{
 c=a+b;
 a=b;
 b=c;
 i++;
 printf("\t%lu",c);
}while(i<n);
err:
printf("\nPress any key..... ");
getch();
}