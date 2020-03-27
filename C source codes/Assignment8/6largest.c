/*Program to accept n elements and find the largest of n
elements*/

void main()
{
int A[100],large=-32768;
unsigned int i,n;    //i is the loop controller,n is the limit
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

for(i=0;i<n;i++)
{
 if(A[i]>large)
  large=A[i];
}
printf("\nThe largest number in the array is %d",large);

end:
printf("\nPress any key.....");
getch();
}