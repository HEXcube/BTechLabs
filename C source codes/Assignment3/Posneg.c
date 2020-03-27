/*Program to check whether a number is positive or negative*/
void main()
{
int a;
clrscr();
printf("Enter a number : ");
scanf("%d",&a);
if(a>0)
printf("The number is positive.");
else
{
 if(a<0)
 printf("The number is negative.");
 else
 printf("The number is 0,which is neither positive nor negative.");
}
getch();
}