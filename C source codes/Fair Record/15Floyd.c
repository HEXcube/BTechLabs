/*Program to display Floyd's triangle.i.e
	...........
	1
	2 3
	4 5 6
	7 8 9 10
upto given number of rows
*/
void main()
{
unsigned int i,j,n,k=1;    //i and j are the loop controllers
clrscr();

printf("Enter the number of rows : ");
scanf("%u",&n);

printf("\nThe Floyds triangle upto %u rows:\n",n);
for(i=1;i<=n;i++)
{
 for(j=1;j<=i;j++,k++)
 {
  printf("%-3u",k);  //%-2u means left justified 2 character field output
 }
printf("\n");
}

printf("\nPress any key..... ");
getch();
}

/*OUTPUT
Enter the number of rows : 5

The Floyds triangle upto 5 rows:
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15

Press any key.....
*/