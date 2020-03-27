/*Program to display the first n terms of Fibonacci series . (Use recursion).*/

unsigned int fibonacci(unsigned int);
void main()
{
unsigned int n,i;
clrscr();

printf("Enter the limit : ");
scanf("%u",&n);
if(n==0)
{
 printf("Nothing to display.");
 goto end;
}

printf("\nThe fibonacci series for %u terms is :\n0",n);
for(i=1;i<n;i++)
printf(" %u",fibonacci(i));

end:
printf("\nPress any key..... ");
getch();
}

unsigned int fibonacci(unsigned int num)
{
 if(num<0)
 {
  printf("\nError-negative argument.\n");
  exit(0);
 }
 else if(num<3)
  return 1;
 else
  {
  return (fibonacci(num-1)+fibonacci(num-2));
  }
}

/*OUTPUT
Enter the limit : 8

The fibonacci series for 8 terms is :
0 1 1 2 3 5 8 13
Press any key.....
*/