/*Program to search an element using binary search.Also find the position of the
  element.*/

void main()
{
int A[100],bsearch,tmp;
unsigned int i,j,n,mid,upper,lower;
clrscr();
//bsearch is the element to be searched
//tmp is temporary storage variable used during sorting
//i is the loop controller,n is the limit
//upper is the upper limit and lower is the lower limit
//mid is the mid point of upper and lower

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

printf("Enter the element you wish to search : ");
scanf("%d",&bsearch);

//for sorting the array
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
	if(A[j]<A[i])
	{
		tmp=A[i];
		A[i]=A[j];
		A[j]=tmp ;
	}

lower=0;
upper=n;
while(lower<upper)
{
	mid=(lower+upper)/2;
	if(A[mid]==bsearch)
		break;
	else
	{
		if(bsearch>A[mid])
			lower=mid;
		else 
			upper=mid;
	}
}
for(i=0;i<n;i++)
printf("%d\t",A[i]);
if(lower<upper)
printf("\n%d was found at position %u in the sorted array.",bsearch,mid+1);
else
printf("\n%d was not found in the given array.",bsearch);

end:
printf("\nPress any key.....");
getch();
}