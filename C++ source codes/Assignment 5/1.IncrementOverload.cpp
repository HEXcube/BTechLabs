/*Overload ++ operator to perform unit increment on a variable in a
class Test*/
#include<iostream.h>
#include<conio.h>
class Test
{
    int a;
public:
    Test()
    {
        a=0;
    }
    void setter()
    {
        cout<<"Enter the value :";
        cin>>a;
    }
    void getter()
    {
        cout<<a;
    }
    void operator ++ ()
    {
        ++a;
    }
};

void main()
{
    clrscr();

    Test T;
    T.setter();
    cout<<"\nValue before incrementing : ";
    T.getter();

    ++T;
    cout<<"\nValue after incrementing  : ";
    T.getter();

    cout<<"\nPress any key....";
    getch();
}

/*OUTPUT
Enter the value :7

Value before incrementing : 7
Value after incrementing  : 8
Press any key....
*/