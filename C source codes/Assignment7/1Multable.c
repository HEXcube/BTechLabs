/*Program to display the multiplication table of first n
natural numbers*/

void main()
{
unsigned int i,j,n;    //i and j are the loop controllers
clrscr();
printf("Enter the number upto which multiplication "
"table\nhas to be displayed : ");
scanf("%u",&n);
printf("     1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
for(i=1;i<76;i++)
 printf("_");
printf("\n");
for(i=1;i<=n;i++)
{
 printf("%u",i);
 if(i<10)
  printf("  ");
 else if(i<100)
  printf(" ");
 printf("| ");
 for(j=1;j<=10;j++)
 {
  printf("%u",j*i);
  if(j<10)
  printf("\t");
 }
printf("\n");
}
printf("\nPress any key..... ");
getch();
}