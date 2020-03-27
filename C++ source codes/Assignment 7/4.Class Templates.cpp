/* Familiarize class templates using different data types*/

#include<iostream.h>
#include<conio.h>

template <class Type1,class Type2>
class Marks
{
	Type1 Internals;
	Type2 University;

public:
	void accept_internals()
	{
		cin>>Internals;
	}
	void accept_university()
	{
		cin>>University;
	}
	void show_internals()
	{
		cout<<"Internals  : "<<Internals;
	}
	void show_university()
	{
		cout<<"University : "<<University;
	}
};

void main()
{
	clrscr();

	Marks<int,float> M1;
	cout<<endl<<"Student 1\n"
		<<"Enter the internal marks in integer form : ";
	M1.accept_internals();
	cout<<"Enter the university marks in decimal form : ";
	M1.accept_university();

	Marks<char,int> M2;
	cout<<endl<<"Student 2\n"
		<<"Enter the internal marks as grade : ";
	M1.accept_internals();
	cout<<"Enter the university marks in integer form : ";
	M1.accept_university();

	Marks<int,char> M3;
	cout<<endl<<"Student 3\n"
		<<"Enter the internal marks in integer form : ";
	M1.accept_internals();
	cout<<"Enter the university marks as grade : ";
	M1.accept_university();

	cout<<"\nStudent 1-\n";
	M1.show_internals();cout<<endl;
	M1.show_university();cout<<endl;

	cout<<"\nStudent 2-\n";
	M2.show_internals();
	cout<<" Grade\n";
	M2.show_university();cout<<endl;

	cout<<"\nStudent 3-\n";
	M3.show_internals();cout<<endl;
	M3.show_university();
	cout<<" Grade\n";

	cout<<"\nPress any key....";
	getch();
}