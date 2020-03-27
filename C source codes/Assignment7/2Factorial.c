/*Program to display the factorials of first n natural numbers*/

void main()
{
unsigned int i,j,n,num;    //i and j are the loop controllers
unsigned long fact;                 //fact is the factorial
clrscr();
printf("Upto which number do you want"
"the factorials to be displayed? : ");
scanf("%u",&n);
for(i=1;i<=n;i++)
{
 fact=1;
 for(j=1;j<=i;j++)
 {
  fact*=j;
 }
 printf("\n%u!=%lu",i,fact);
}
printf("\nPress any key..... ");
getch();
}