/*Program to find the find the transpose of a given matrix.*/


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

printf("\nThe transpose of the given matrix is :\n");
for(j=0;j<n;j++)
{
	for(i=0;i<m;i++)
		printf("%d\t",A[i][j]);
	printf("\n");
}

end:
printf("\nPress any key.....");
getch();
}