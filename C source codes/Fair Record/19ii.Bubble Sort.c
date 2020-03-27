/*Program to to sort an array of numbers using bubble sort*/

void main()
{
int A[100],tmp;
unsigned int i,j,n;
clrscr();
//tmp is temporary storage variable used during sorting
//i and j are the loop controllers,n is the limit


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
for(j=0;j<n-i-1;j++)
  if(A[j]>A[j+1])
    {
	tmp=A[j];
	A[j]=A[j+1];
	A[j+1]=tmp ;
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