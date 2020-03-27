//Program to demonstrate single inheritance

#include<iostream.h>
#include<conio.h>

class base
{

protected:
    char name[15];
    int age;
};

class derived:public base
{
    float height;
    float weight;

public:

    void get()
    {
        cout<<"\nEnter name  : ";
        cin>>name;
        cout<<"\nEnter  age  : ";
        cin>>age;
	cout<<"\nEnter height(in feet): ";
        cin>>height;
	cout<<"\nEnter weight(in Kg): ";
        cin>>weight;
    }

    void disp()
    {
	cout<<"\n Name  : "<<name
	<<"\n Age   : "<<age<<" Years"
	<<"\n Height: "<<height<<" Feets"
	<<"\n Weight: "<<weight<<" Kg";

    }

};

void main()
{
    clrscr();

    derived X;
    X.get();
    X.disp();

    getch();
}

/*OUTPUT
Enter name  : HEXcube

Enter  age  : 18

Enter height(in feet): 5.11

Enter weight(in Kg): 56

 Name  : HEXcube
 Age   : 18 Years
 Height: 5.11 Feets
 Weight: 56 Kg
*/