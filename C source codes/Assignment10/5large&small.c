/*Program to find the elements which are largest in the column
and smallest in the row of matrix.*/

void main()
{
int A[50][50],small[50],large[50];
unsigned int i,j,m,n;
clrscr();
//i and j are the loop controllers
//m and n are the number of rows and columns respectively

printf("Enter the number of rows and columns respectively : ");
scanf("%u%u",&m,&n);

if(m>50||n>50)
{
 printf("Sorry, Array size too large!");
 goto end;
}
 
printf("Enter the elements of the matrix -\n");
for(i=0;i<m;i++)
{
printf("Enter the elements of row %u : ",i+1);
for(j=0;j<n;j++)
 scanf("%d",&A[i][j]);
}

for(i=0;i<50;i++)
{
small[i]=32767;
large[i]=-32768;
}

for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
	if(A[i][j]<small[i])
		small[i]=A[i][j];
	if(A[i][j]>large[j])
		large[j]=A[i][j];
}

printf("\nThe smallest element of\n");
for(i=0;i<m;i++)
printf("Row %u : %d\n",i+1,small[i]);

printf("\nThe largest element of\n");
for(j=0;j<n;j++)
printf("Column %u : %d\n",j+1,large[j]);

end:
printf("\nPress any key.....");
getch();
}