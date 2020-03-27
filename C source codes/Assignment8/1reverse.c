/*Program to accept n elements and print it in the reverse order*/

void main()
{
int A[100];
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

printf("The given elements in reverse order are :\n");
for(i=n-1;i>0;i--)
{
 printf("%d\t",A[i]);
}
printf("and %d",A[0]);

end:
printf("\nPress any key.....");
getch();
}