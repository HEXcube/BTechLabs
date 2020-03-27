/*Program to display the factors of first n natural numbers*/

void main()
{
unsigned int i,j,n;    //i and j are the loop controllers
clrscr();
printf("Upto which number do you want"
"the factors to be displayed? : ");
scanf("%u",&n);
for(i=1;i<=n;i++)
{
 printf("\n\nFactors of %u are :\n1",i);

 for(j=2;j<=i/2;j++)
 {
  if(i%j==0)
   printf(",%u",j);
 }

 printf(" and %u",i);
}
printf("\nPress any key..... ");
getch();
}

