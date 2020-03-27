/*Overload the subscript operator for the class String, so that it takes
a character as parameter and returns the position of its first occurence.
The output of the following code should be 2:
String S1("Pace")
cout<<S1['c']
*/

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
    unsigned int operator [] (char);
    void ShowString();
};

unsigned int String::operator [] (char x)
{
    unsigned int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==x)
            return i;
    }
    cout<<endl<<x<<" was not found!\n"
        <<"Number of Occurences : ";
    return 0;
}

void String::ShowString()
{
    cout<<str;
}

void main()
{
    char* string,x;
    clrscr();

    cout<<"\nEnter a string        : ";
    cin>>string;
    String S(string);

    cout<<"\nThe string entered is :\n";
    S.ShowString();

    cout<<"\nEnter the character to search for in the given string : ";
    cin>>x;

    cout<<"\nPosition at which the given character was found : ";
    cout<<S[x];

    cout<<"\n\nPress any key....";
    getch();
}

/*OUTPUT
Enter a string        : DeathMatch

The string entered is :
DeathMatch
Enter the character to search for in the given string : M

Position at which the given character was found : 5

Press any key....
*/