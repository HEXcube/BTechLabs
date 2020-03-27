/*Program to find the largest of three numbers using conditional operator*/

void main()
{
int n1,n2,n3;            //n1,n2 and n3 are  the numbers to compare
clrscr();
printf("Enter three numbers:\n");
scanf("%d%d%d",&n1,&n2,&n3);
(n1>n2&&n1>n3) ? printf("\n%d is the largest among the three numbers.",n1) : 
     (n2>n1&&n2>n3) ? printf("\n%d is the largest among the three numbers",n2) :
		 printf("\n%d is the largest among the three numbers",n3);
getch();
}