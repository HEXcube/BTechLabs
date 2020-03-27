/*Program to insert an element into the specific position of an array.*/

void main()
{
int A[100],ins;
unsigned int i,n,pos;
clrscr();
//ins is the element to be inserted
//i is the loop controller,n is the limit
//pos is the position to which element has to be inserted

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
printf("Specify the position to which the %d"
	   " has to be inputed : ",ins);
scanf("%u",&pos);
if(pos>n+1)
{
 printf("The specified position exceeds array limit!");
 goto end;
}

pos--;
for(i=n;i>pos;i--)
	A[i]=A[i-1];
A[pos]=ins;
n++;

printf("The given array after inserting %d into the position %u is :\n",ins,++pos);
for(i=0;i<n;i++)
printf("%d\t",A[i]);

end:
printf("\nPress any key.....");
getch();
}