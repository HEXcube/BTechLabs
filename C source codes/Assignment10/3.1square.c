/*Program to accept a square matrix and determine whether
it is a  square matrix*/


void main()
{
int A[50][50];
unsigned int i,j,m,n;
clrscr();
//i and j are the loop controllers
//m and n are the number of rows and columns respectively

printf("Enter the number of rows and columns respectively : \n");
scanf("%u%u",&m,&n);

if(m>50||n>50)
{
 printf("Sorry, Array size too large!");
 goto end;
}
 
printf("Enter the elements-\n");
for(i=0;i<m;i++)
{
printf("Enter the elements of row %u : ",i+1);
for(j=0;j<n;j++)
 scanf("%d",&A[i][j]);
}

if(m==n)
printf("\nThe given matrix is a square matrix.\n");
else
printf("\nThe given matrix is not a square matrix.\n");

end:
printf("\nPress any key.....");
getch();
}