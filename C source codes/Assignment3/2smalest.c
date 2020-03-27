/*Program to find the smallest of two numbers*/
void main()
{
int a,b;
clrscr();
printf("Enter two numbers : ");
scanf("%d%d",&a,&b);
if(a<b)
printf("The smallest number is %d.",a);
else
printf("The smallest number is %d.",b);
getch();
}