/*Program to program to multiply 2 matrices.Two matrices of size mxn and
 pxq can be multiplied only if n=p or m=q.The resultant matrix is of the
 size mxq or nxp.
 
 a b     u v w    au+bx  av+by  aw+bz
 c d  x  x y z  = cu+dx  cv+dy  cw+dz
 e f              eu+fx  ev+fy  ew+fz
*/
void main()
{
int A[50][50],B[50][50],C[50][50];
unsigned int i,j,k,m,n,p,q;
clrscr();
//i,j and k are the loop controllers
//m and n = no of rows and columns of matrix 1
//p and q = no of rows and columns of matrix 2

printf("Enter the number of rows and columns of the 1st matrix : ");
scanf("%u%u",&m,&n);
printf("Enter the number of rows and columns of the 2nd matrix : ");
scanf("%u%u",&p,&q);

if( (m>50||n>50) || (p>50)||(q>50) )
{
 printf("Sorry, Array size too large!");
 goto end;
}

if(n!=p)
{
printf("Error!Incompatible array sizes!\n"
	"Matrix multiplication not possible!");
goto end;
}

printf("Enter the elements of matrix 1\n");
for(i=0;i<m;i++)
{
printf("Enter the elements of row %u : ",i+1);
for(j=0;j<n;j++)
 scanf("%d",&A[i][j]);
}

printf("Enter the elements of matrix 2\n");
for(i=0;i<p;i++)
{
printf("Enter the elements of row %u : ",i+1);
for(j=0;j<q;j++)
 scanf("%d",&B[i][j]);
}

for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
		C[i][j]=0;
		for(k=0;k<n;k++)
		C[i][j]+=A[i][k]*B[k][j];
	}
}

printf("\nThe matrix obtained by multiplying the 2 given matrices :\n");
for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
		printf("\t%d",C[i][j]);
	}
	printf("\n");
}


end:
printf("\nPress any key.....");
getch();
}