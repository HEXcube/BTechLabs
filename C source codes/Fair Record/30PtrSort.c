/*Program to to sort n numbers using pointers*/

void main()
{
int  A[100];
int* p[100],tmp;
unsigned int i,j,n,min;
clrscr();
//tmp is temporary storage pointer used during sorting
//i and j are the loop controller,n is the limit
//min is the smallest element's position

printf("How many elements do you wish to input? - ");
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
 p[i]=A+i;          //A+i is same as &A[i]
}


//selection sort with pointers
for(i=0;i<n-1;i++)
{
 min=i;
 for(j=i+1;j<n;j++)
  if(*p[j]<*p[min])
   min=j;

 if(min!=i)
  {
		tmp=p[i];
		p[i]=p[min];
		p[min]=tmp ;
  }
}

printf("\nThe array elements after sorting are:\n");
for(i=0;i<n;i++)
printf("%d ",*p[i]);

end:
printf("\nPress any key.....");
getch();
}

/*OUTPUT
How many elements do you wish to input? - 5
Enter the elements-
Element 1 : 12
Element 2 : 3
Element 3 : -4
Element 4 : 34
Element 5 : 56

The array elements after sorting are:
-4 3 12 34 56
Press any key.....
*/