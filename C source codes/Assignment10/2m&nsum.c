/*Program to find the sum of column elements and row elements
of a given matrix*/

void main()
{
int A[50][50],rowsum[50],colsum[50];
unsigned int i,j,m,n;
clrscr();
//i and j are the loop controllers
//m and n are the number of rows and columns respectively
//rowsum[] and colsum[] are the sum of row and column elements

printf("Enter the number of rows and columns respectively : ");
scanf("%u%u",&m,&n);

if(m>50||n>50)
{
 printf("Sorry, Array size too large!");
 goto end;
}

for(i=0;i<50;i++)
{
rowsum[i]=0;
colsum[i]=0;
}

printf("Enter the elements-\n");
for(i=0;i<m;i++)
{
printf("Enter the elements of row %u : ",i+1);
for(j=0;j<n;j++)
 scanf("%d",&A[i][j]);
}

for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
	rowsum[i]=rowsum[i]+A[i][j];
	colsum[j]=colsum[j]+A[i][j];
}

printf("\nThe sum of elements of\n");
for(i=0;i<m;i++)
printf("Row %u : %d\n",i+1,rowsum[i]);
printf("\nThe sum of elements of\n");
for(j=0;j<n;j++)
printf("Column %u : %d\n",j+1,colsum[j]);

end:
printf("\nPress any key.....");
getch();
}