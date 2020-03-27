/*Program to find the value of X^n where X and n are given*/

void main()
{
int n,i=0;
float x;
double result=1;            //result is the value of x^n
clrscr();
printf("Enter the value of x : ");
scanf("%f",&x);
printf("\nEnter the value of exponent n : ");
scanf("%d",&n);
if(n==0)
{
printf("\n%f^%d=1",x,n);
goto one;
}
do
{
 result*=x;
 i++;
}while(i<n);
printf("%f^%d=%lf",x,n,result);
one:
printf("\nPress any key..... ");
getch();
}