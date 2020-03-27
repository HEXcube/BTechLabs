/*Function to swap two data items*/
#include<iostream.h>
#include<conio.h>

template <class Type>
void swap(Type &A,Type &B)
{
	Type Temp;

	Temp=A;
	A=B;
	B=Temp;
}

void main()
{
	clrscr();

	int p=10,q=20;
	float m=10.5,n=63.2;
	char a='a',b='b';

	cout<<"\nIntegers before swaping :\n"
		<<"p = "<<p<<endl
		<<"q = "<<q;
	swap(p,q);
	cout<<"\nIntegers after swaping :\n"
		<<"p = "<<p<<endl
		<<"q = "<<q<<endl;

	cout<<"\nFloats before swaping   :\n"
		<<"m = "<<m<<endl
		<<"n = "<<n;
	swap(m,n);
	cout<<"\nFloats after swaping :\n"
		<<"m = "<<m<<endl
		<<"n = "<<n<<endl;

	cout<<"\nCharacters before swaping :\n"
		<<"a = "<<a<<endl
		<<"b = "<<b;
	swap(a,b);
	cout<<"\nCharacters after swaping :\n"
		<<"a = "<<a<<endl
		<<"b = "<<b<<endl;

	cout<<"\nPress any key....";
	getch();
}

/*OUTPUT
Integers before swaping :
p = 10
q = 20
Integers after swaping :
p = 20
q = 10

Floats before swaping   :
m = 10.5
n = 63.200001
Floats after swaping :
m = 63.200001
n = 10.5

Characters before swaping :
a = a
b = b
Characters after swaping :
a = b
b = a

Press any key....
*/