/*Program to display all the odd and even factors of a number*/
void main()
{
unsigned int i,n;    //i and j are the loop controllers
clrscr();
printf("For which number do you want to"
"display the factors? : ");
scanf("%u",&n);
printf("\nThe even factors of %u are :\n",n);
for(i=1;i<=n;i++)
{
 if(i%2)
  continue;
 if(n%i==0)
  printf("%u\t",i);
}
printf("\nThe odd factors of %u are :\n",n);
for(i=1;i<=n;i++)
{
 if(i%2==0)
  continue;
 if(n%i==0)
  printf("%u\t",i);
}
printf("\nPress any key..... ");
getch();
}