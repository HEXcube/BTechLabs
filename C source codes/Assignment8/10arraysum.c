/*Program to input two linear arrays and store the sum
the corresponding  elements into a new array*/

void main()
{
int A[100],B[100],C[100]; //A[] and B[] are the initial arrays,C[] is the array of sums
unsigned int i,n;         //i is the loop controller,n is the limit
clrscr();

printf("How many elements do you wish to input?\n");
scanf("%u",&n);

if(n>100)
{
 printf("Sorry, Array size too large!");
 goto end;
}
 
printf("\nEnter the elements of first array-\n");
for(i=0;i<n;i++)
{
 printf("Element %u : ",i+1);
 scanf("%d",&A[i]);
}

printf("\nEnter the elements of second array-\n");
for(i=0;i<n;i++)
{
 printf("Element %u : ",i+1);
 scanf("%d",&B[i]);
}


for(i=0;i<n;i++)
{
 C[i]=A[i]+B[i];
}

printf("\nThe sum of corresponding elements of the"
       " two arrays are :\n");
for(i=0;i<n;i++)
{
 printf("%d\t",C[i]);
}

end:
printf("\nPress any key.....");
getch();
}