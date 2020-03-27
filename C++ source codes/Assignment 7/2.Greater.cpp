/*Function to find the greater of two data items*/
#include<iostream.h>
#include<conio.h>

template <class Type>
Type greater(Type A,Type B)
{
	if(A>B)
		return A;
	else
		return B;
}

void main()
{
	clrscr();

	int p,q,r;
	float m,n,o;
	char a,b,c;

	cout<<"Enter two integers :\n";
	cin>>p>>q;
	r=greater(p,q);
	cout<<"Greater number is "<<r<<endl;

	cout<<"\nEnter two floats :\n";
	cin>>m>>n;
	o=greater(m,n);
	cout<<"Greater number is "<<o<<endl;

	cout<<"\nEnter two characters :\n";
	cin>>a>>b;	
	c=greater(a,b);
	cout<<"Greater character is "<<c<<endl;

	cout<<"\nPress any key....";
	getch();
}
