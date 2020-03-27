/*Program to print the fibonacci series in reverse order*/

void main()
{
int A[100];
unsigned int i,n;    //i is the loop controller,n is the limit
clrscr();

printf("How many terms of the fibonacci series do you want "
       "to display?\n");
scanf("%u",&n);

if(n>100)
{
 printf("Sorry, Array size too large!");
 goto end;
}
if(n==0)
{
 printf("Nothing to display!");
 goto end;
}

A[0]=0;
A[1]=1;
for(i=2;i<n;i++)
{
 A[i]=A[i-1]+A[i-2];
}

printf("\nThe fibonacci series upto %u terms in reverse"
       " order is :\n",n);
for(i=n-1;i>0;i--)
 printf("%d\t",A[i]);
printf(" and %d",A[0]);

end:
printf("\nPress any key.....");
getch();
}