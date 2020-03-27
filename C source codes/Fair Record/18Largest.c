/*Find the largest and second largest among set of numbers.*/

void main()
{
int A[100],large=-32768,seclarge=-32768; //large and seclarge are the largest and second largest elements
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

for(i=0;i<n;i++)
{
 if(A[i]==large)
  continue;
 if(A[i]>seclarge)
  seclarge=A[i];
}

printf("\nThe largest number in the array is %d\n"
       "The second largest number in the array is %d\n"
       ,large,seclarge);

end:
printf("\nPress any key.....");
getch();
}

/*OUTPUT
How many elements do you wish to input?
3
Enter the elements-
Element 1 : 123
Element 2 : -543
Element 3 : 24

The largest number in the array is 123
The second largest number in the array is 24

Press any key.....
*/