/*Program to display the pattern
	11
       1221
      123321
     12344321
   ............
upto given number of rows
*/
void main()
{
unsigned int i,j,n;    //i and j are the loop controllers
clrscr();
printf("Enter the number of rows : ");
scanf("%u",&n);
for(i=1;i<=n;i++)
{
 for(j=1;j<=n-i;j++)
 {
  printf(" ");
 }

 for(j=1;j<=i;j++)
 {
  printf("%u",j);
 }
 
 for(j=i;j>0;j--)
 {
  printf("%u",j);
 }
printf("\n");
}
printf("\nPress any key..... ");
getch();
}