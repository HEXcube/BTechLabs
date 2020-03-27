/*Program to develop a magic square*/

void main()
{
unsigned int n,count=1;
signed int i,j;
int A[25][25];
clrscr();

printf("Enter the order of magic square : ");
scanf("%u",&n);

if(!(n%2))
{
 printf("Sorry!This program doesn't work on even magic squares\n");
 goto end;
}
if(n>25)
{
 printf("Sorry!Array size too large\n");
 goto end;
}

for(i=0;i<n;i++)
for(j=0;j<n;j++)
A[i][j]=0;

i=0;
j=n/2;
while(count<n*n)
{
	if( (i<0)&&(j>n-1) )
	{
		i+=2;
		j--;
	}
	else
	{
	 if(i<0)
	       {	i=n-1; }
	 else if(j>n-1)
	       {	j=0; }
	}
	if(A[i][j])
	{
		i+=2;
		j--;
	}
	A[i][j]=count++;
	j++;
	i--;
}
A[n-1][n/2]=count;

printf("\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
  printf(" %2d ",A[i][j]);
printf("\n");
}

end:
printf("\nPress any key.....");
getch();
}

/*
Enter the order of magic square : 5

 17  24   1   8  15
 23   5   7  14  16
  4   6  13  20  22
 10  12  19  21   3
 11  18  25   2   9

Press any key.....
*/