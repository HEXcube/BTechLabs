/*Program to accept a square matrix and determine whether
it is a  symmetric matrix*/


void main()
{
int A[50][50];
unsigned int i,j,n,flag=1;
clrscr();
//i and j are the loop controllers
//n is the order of the square matrix
printf("Enter the order of the square matrix : \n");
scanf("%u",&n);

if(n>50)
{
 printf("Sorry, Array size too large!");
 goto end;
}
 
printf("Enter the elements-\n");
for(i=0;i<n;i++)
{
printf("Enter the elements of row %u : ",i+1);
for(j=0;j<n;j++)
 scanf("%d",&A[i][j]);
}

for(i=0;i<n;i++)
for(j=0;j<n;j++)
	if(i!=j)
		if(A[i][j]!=A[j][i])
		{
			flag=0;
			break;
		}

printf("The given matrix is "); 
	   if(!flag)
	     printf("not ");
printf("a symmetric matrix");

end:
printf("\nPress any key.....");
getch();
}