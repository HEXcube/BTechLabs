/*Program to accept n elements and find the elements greater
than the average*/

void main()
{
int A[100],avg;      //avg is the average
unsigned int i,n;    //i is the loop controller,n is the limit
long S=0;            //S is the sum
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

printf("The average of elements are :\n");
for(i=0;i<n;i++)
{
 S+=A[i];
}
avg=S/n;
printf("%f",(float)S/n);

printf("\nThe elements greater than the average are :\n");
for(i=0;i<n;i++)
{
 if(A[i]>avg)
  printf("%d\t",A[i]);
}

end:
printf("\nPress any key.....");
getch();
}