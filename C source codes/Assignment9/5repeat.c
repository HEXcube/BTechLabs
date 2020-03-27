/*Program to find the repeated elements in an array.*/

void main()
{
int A[100],tmp;
unsigned int i,j,n,count=1;
clrscr();
//i and j are the loop controllers,n is the limit
//tmp is the intermediate storage variable
//count sores the number of repetitions

printf("How many elements do you wish to input?\n");
scanf("%u",&n);

if(n>100)
{
 printf("Sorry, Array size too large!");
 goto end;
}
 
printf("Enter the elements-\n");
for(i=0;i<n;i++)
{
 printf("Element %u : ",i+1);
 scanf("%d",&A[i]);
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

printf("The repeated array elements are :\n");
for(i=0;i<n;i++)
{
	if(A[i]==A[i+1])
		count++;
	else if(count>1)
	       {
		printf("\n%d  -  %u times",A[i],count);
		count=1;
	       }
}

end:
printf("\nPress any key.....");
getch();
}