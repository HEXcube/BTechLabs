/*Program to find the trace and norm of a given square
matrix of size MxN.*/

void main()
{
int A[50][50],trace=0,norm=0;
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
 
printf("Enter the elements-\n");
for(i=0;i<m;i++)
{
printf("Enter the elements of row %u : ",i+1);
for(j=0;j<n;j++)
 scanf("%d",&A[i]);
}

for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
	norm=norm+A[i][j]*A[i][j];

}

for(i=0,j=0;i<m;i++,j++)
trace=trace+A[i][j];

printf("\n Trace : %d"
	   "\n Norm  : %d",trace,norm);

end:
printf("\nPress any key.....");
getch();
}