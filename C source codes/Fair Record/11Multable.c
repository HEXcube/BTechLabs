/*Program to display the multiplication table of a given
number */

void main()
{
unsigned int i=1,n;    //i and j are the loop controllers
clrscr();
printf("Enter the number whose multiplication "
"table has to be displayed : ");
scanf("%u",&n);

printf("The multiplication table of %u is:\n",n);
do
{
 printf("%3u x %3u = %5u\n",n,i,n*i);     //%5u prints the output in 5 letter field
 i++;
}while(i<11);            //same as i<=10

printf("\nPress any key..... ");
getch();
}

/*OUTPUT
Enter the number whose multiplication table has to be displayed : 11
The multiplication table of 11 is:
 11 x   1 =    11
 11 x   2 =    22
 11 x   3 =    33
 11 x   4 =    44
 11 x   5 =    55
 11 x   6 =    66
 11 x   7 =    77
 11 x   8 =    88
 11 x   9 =    99
 11 x  10 =   110

Press any key.....
*/



































