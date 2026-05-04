//Program to demonstrate single inheritance

#include<iostream.h>
#include<conio.h>

class base
{
protected:
    char name[15];
};

class derived:public base
{
    int age;

public:

    void get()
    {
        cout<<"\nEnter name  : ";
        cin>>name;
        cout<<"\nEnter  age  : ";
        cin>>age;
    }

    void disp()
    {
	cout<<"\n Name  : "<<name
	<<"\n Age   : "<<age<<" Years";
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
Enter name  : Rohan Villoth

Enter  age  : 18

 Name  : Rohan Villoth
 Age   : 18 Years
*/