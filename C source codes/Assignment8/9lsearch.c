/*Program to accept n elements and search the given
element in the array*/

void main()
{
int A[100],lsearch;
unsigned int i,n,count=0;    //i is the loop controller,n is the limit
clrscr();

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
scanf("%d",&lsearch);
for(i=0;i<n;i++)
{
 if(A[i]==lsearch)
  count++;
}
if(count)
 printf("\nThe search element was found at %u "
	   "position(s) in the given array",count);
else
 printf("\nThe element you entered could not be"
	" found in the array");

end:
printf("\nPress any key.....");
getch();
}