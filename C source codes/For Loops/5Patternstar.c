/*Program to display the pattern
	..........
	* * * *
	* * *
	* *
	*
upto given number of rows
*/
void main()
{
unsigned int i,j,n;    //i and j are the loop controllers
clrscr();
printf("Enter the number of rows : ");
scanf("%u",&n);
for(i=0;i<n;i++)
{
 for(j=0;j<n-i;j++)
 {
  printf("* ");
 }
printf("\n");
}
printf("\nPress any key..... ");
getch();
}