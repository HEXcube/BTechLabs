/*Program to check whether a number is odd or even*/
void main()
{
int a;
clrscr();
printf("Enter a number : ");
scanf("%d",&a);
if(a%2)
printf("The number is odd.");
else
{
 if(a!=0)
 printf("The number is even.");
 else
 printf("The number is 0,which is neither positive nor negative.");
}
getch();
}