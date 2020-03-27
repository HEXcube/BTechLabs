/*Program to find the combination nCr where
n and r are given.nCr=n!/r!(n-r)!*/

unsigned long fact();
void main()
{
unsigned int n,r;
clrscr();

printf("Enter the values of n and r : ");
scanf("%u %u",&n,&r);

printf("\n%uC%u is %lu\n",n,r,fact(n) / (fact(r)*fact(n-r)) );
printf("\nPress any key..... ");
getch();
}

unsigned long fact(int n)       //function to return n!
{
 if(n==0)
  return 1;
 else
  return n*fact(n-1);
}

/*OUTPUT
Enter the values of n and r : 5 3

5C3 is 10

Press any key.....
*/