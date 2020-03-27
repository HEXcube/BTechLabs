/*Program to insert an element into the last position of an array.*/

void main()
{
int A[100],ins;
unsigned int i,n;
clrscr();
//ins is the element to be inserted
//i is the loop controller,n is the limit

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

printf("Enter the element you wish to insert : ");
scanf("%d",&ins);
A[n]=ins;
n++;

printf("The given array after inserting %d into the end is :\n",ins);
for(i=0;i<n;i++)
printf("%d\t",A[i]);

end:
printf("\nPress any key.....");
getch();
}