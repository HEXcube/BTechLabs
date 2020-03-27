/*Program to read two arrays A and B.Find all the elements both in A and B.*/

void main()
{
int A[100],B[100],tmp;
unsigned int i,j,n;
clrscr();
//i and j are the loop controllers,n is the limit
//A[100] and B[100] are the arrays to be compared
//tmp is the intermediate storage variable

printf("How many elements do you wish to input?\n");
scanf("%u",&n);

if(n>100)
{
 printf("Sorry, Array size too large!");
 goto end;
}
 
printf("Enter the elements of first array-\n");
for(i=0;i<n;i++)
{
 printf("Element %u : ",i+1);
 scanf("%d",&A[i]);
}

printf("Enter the elements of second array-\n");
for(i=0;i<n;i++)
{
 printf("Element %u : ",i+1);
 scanf("%d",&B[i]);
}

//for sorting the array
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
	if(A[j]<A[i])
	{
		tmp=A[i];
		A[i]=A[j];
		A[j]=tmp ;
	}

printf("The elements common in both arrays are :\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(A[i]!=A[i+1])
if(A[i]==B[j])
	{
		printf("%d\t",A[i]);
		break;
	}

end:
printf("\nPress any key.....");
getch();
}