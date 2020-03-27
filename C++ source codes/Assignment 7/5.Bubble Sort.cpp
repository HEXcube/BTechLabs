/*Create a template for bubble sort*/
#include<iostream.h>
#include<conio.h>

template <class Type>
Type bubble(Type* A,unsigned int lim)
{
	for(unsigned int i=0; i<lim-1 ;i++ )
		for(unsigned int j=lim-1; j>i ;j--)
			if(A[j]<A[j-1])
			{
				Type temp;
				temp = A[j];
				A[j] = A[j-1];
				A[j-1] = temp;
			}
}

void main()
{
	clrscr();

	unsigned int limit;
	int int_array[50];
	cout<<"How many numbers do you wish to enter? : ";
	cin>>limit;
	cout<<"Enter the elements : "

	cout<<"\nPress any key....";
	getch();
}
