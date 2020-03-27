/*Program to display the pattern
	...........
	4 4 4 4
	3 3 3
	2 2
	1
upto given number of rows
*/
void main()
{
unsigned int i,j,n;    //i and j are the loop controllers
clrscr();
printf("Enter the number of rows : ");
scanf("%u",&n);
for(i=n;i>0;i--)
{
 for(j=i;j>0;j--)
 {
  printf("%u ",i);
 }
printf("\n");
}
printf("\nPress any key..... ");
getch();
}