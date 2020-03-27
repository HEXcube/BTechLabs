/*Program to display the pattern
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
for(i=1;i<=n;i++)
{
 for(j=1;j<=i;j++,k++)
 {
  printf("%u ",k);
 }
printf("\n");
}
printf("\nPress any key..... ");
getch();
}