/*Program to perform the operation A+B-(C*x),where A,B,C are arrays and x is a
  constant.*/

void main()
{
int A[100],B[100],C[100],x;
unsigned int i,n;
clrscr();
//i is the loop controller,n is the limit
//x is the constant
//A[100],B[100] and C[100] are the operand arrays

printf("How many elements do you wish to input?\n");
scanf("%u",&n);

if(n>100)
{
 printf("Sorry, Array size too large!");
 goto end;
}
 
printf("Enter the elements of first array-\n");
for(i=0;i<n;i++)
{
 printf("Element %u : ",i+1);
 scanf("%d",&A[i]);
}

printf("Enter the elements of second array-\n");
for(i=0;i<n;i++)
{
 printf("Element %u : ",i+1);
 scanf("%d",&B[i]);
}

printf("Enter the elements of third array-\n");
for(i=0;i<n;i++)
{
 printf("Element %u : ",i+1);
 scanf("%d",&C[i]);
}

printf("Enter the constant x to be multiplied : ");
scanf("%d",&x);

printf("The elements after performing the operation"
       "\nA+B-(C*x) on the the array elements are :\n");
for(i=0;i<n;i++)
{
	printf("%d\t",A[i]+B[i]-(C[i]*x));
}

end:
printf("\nPress any key.....");
getch();
}