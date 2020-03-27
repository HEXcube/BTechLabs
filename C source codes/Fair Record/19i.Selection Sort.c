/*Program to to sort an array of numbers using selection sort*/

void main()
{
int A[100],tmp;
unsigned int i,j,n,min;
clrscr();
//tmp is temporary storage variable used during sorting
//i and j are the loop controller,n is the limit
//min is the smallest element,s position

printf("How many elements do you wish to input? - ");
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

for(i=0;i<n-1;i++)
{
 min=i;
 for(j=i+1;j<n;j++)
  if(A[j]<A[min])
   min=j;

 if(min!=i)
  {
		tmp=A[i];
		A[i]=A[min];
		A[min]=tmp ;
  }
}

printf("\nThe array elements after sorting are:\n");
for(i=0;i<n;i++)
printf("%d ",A[i]);

end:
printf("\nPress any key.....");
getch();
}

/*OUTPUT
How many elements do you wish to input? - 5
Enter the elements-
Element 1 : 12
Element 2 : 3
Element 3 : -4
Element 4 : 34
Element 5 : 56

The array elements after sorting are:
-4 3 12 34 56
Press any key.....
*/