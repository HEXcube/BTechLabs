/*Program to read a set of elements into an array and print the prime and non
  prime numbers separately.*/

void main()
{
int A[100];
unsigned int i,j,n,flag;
clrscr();
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

printf("\nThe prime numbers in the inputed array are :\n");
for(i=0;i<n;i++)
{
	flag=1;
	for(j=2;j<A[i]/2;j++)
	if(A[i]%j==0)
	{
		flag=0;
		break;
	}
	if(flag)
		printf("%d\t",A[i]);
}

printf("\nThe composite numbers in the inputed array are :\n");
for(i=0;i<n;i++)
{
	flag=0;
	for(j=2;j<A[i]/2;j++)
	if(A[i]%j==0)
	{
		flag=1;
		break;
	}
	if(flag)
		printf("%d\t",A[i]);
}

end:
printf("\nPress any key.....");
getch();
}