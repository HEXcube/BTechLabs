/*Program to find the factorial of  given number*/

void main()
{
unsigned int n,i=0;        //n is the limit,i is the loop conroller
unsigned long fact=1;      //fact is the factorial
clrscr();
printf("Enter the number : ");
scanf("%u",&n);
do
{
 i++;
 fact*=i;
}while(i<n);
printf("\nThe factorial of %u is %lu.",n,fact);
printf("\nPress any key..... ");
getch();
}