//Program to demonstrate multiple inheritance

#include<iostream.h>
#include<conio.h>

class Mother
{
protected:
    int a;
};

class Father
{
protected:
    int b;
};

class Child:public Mother,public Father
{
    int c;
public:
    void get()
    {
        cout<<"Enter the values of a,b and c : ";
        cin>>a>>b>>c;
    }
    void disp()
    {
        cout<<"\na="<<a<<"\nb="<<b<<"\nc="<<c;
    }
};

void main()
{
    clrscr();

    Child X;
    X.get();
    cout<<"The values entered are :";
    X.disp();

    getch();
}

/*OUTPUT
Enter the values of a,b and c : 1 2 3
The values entered are :
a=1
b=2
c=3
*/