/*Overload insertion and extraction operator using friend function in
 class String*/

#include<iostream.h>
#include<conio.h>
class String
{
    char* str;
public:
    String()
    {
        str[0]='\0';
    }
    String(char* m)
    {
        str=m;
    }
    friend ostream& operator << (ostream& show,String X)
    {
        show<<X.str;
        return show;
    }
    friend istream& operator >> (istream& set,String X)
    {
        set>>X.str;
        return set;
    }

};

void main()
{
    clrscr();
    String S;

    cout<<"\nEnter a string        : ";
    cin>>S;

    cout<<"\nThe string entered is : ";
    cout<<S;

    cout<<"\n\nPress any key....";
    getch();
}

/*OUTPUT
Enter a string        : Minimize

The string entered is : Minimize

Press any key....
*/