/*Program to find the biggest of three inputed numbers.*/
void main()
{
int a,b,c;
clrscr();
printf("Enter three numbers : ");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("The biggest number is %d.",a);
else
{
 if(b>a&&b>c)
 printf("The biggest number is %d.",b);
 else
 printf("The biggest number is %d.",c);
}
getch();
}

/*OUTPUT
Enter three numbers : 23 -67 45
The biggest number is 45.
*/














