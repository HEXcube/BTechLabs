/*Program to find the combination nCr where
n and r are given*/

void main()
{
unsigned int n,r,i;
unsigned long C=1;            //C is the combination of the series
clrscr();
printf("Enter the values of n and r : ");
scanf("%u %u",&n,&r);
for(i=1;i<=n;i++)
{
 C*=i;
}
for(i=1;i<=(n-r);i++)
{
 C/=i;
}
for(i=1;i<=r;i++)
{
 C/=i;
}
printf("%uC%u is %lu",n,r,C);
printf("\nPress any key..... ");
getch();
}