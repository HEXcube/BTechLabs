/*Create a class String.Use constructors new and delete.
Perform string operations using a menu based program*/

#include <iostream.h>
#include <string.h>
#include <conio.h>

#define M 50

class String
{
    char* word;
    unsigned int strspace;              //space allocated by string pointed by word

public:

    String()
    {
        word=NULL;
    }
    String(char*);
    void Accept(char*);
    void Display();

    friend unsigned int strlen(String);
    String operator = (String);
    friend void strcpy(String,String);
    unsigned int operator == (String);
    unsigned int operator < (String);
    unsigned int operator > (String);
    String operator + (String);

    String operator = (char*);

    ~String()
    {
        if(word!=NULL)
        delete word;
    }

};

String::String(char* str)
{
    strspace = strlen(str) + 1;
    word = new char[strspace];
    strcpy(word,str);
}

void String::Accept(char* str)
{
    *this = str;
}

void String::Display()
{
    cout<<word;
}

unsigned int strlen(String S)
{
    return strlen(S.word);
}

void strcpy(String S,String T)
{
    S = T;
}

String String::operator = (char* str)
{
    if( strspace < (strlen(str)+2) )
    {
        strspace = strlen(str)+1;
        delete word;
        word = new char[strspace];
    }
    strcpy(word,str);

    return *this;
}

String String::operator = (String S)
{
    *this = S.word;
    return *this;
}

unsigned int String::operator == (String S)
{
    if( strcmp(word,S.word) == 0 )
    return 1;
    else
    return 0;
}

unsigned int String::operator < (String S)
{
    if( strcmp(word,S.word) <  0)
    return 1;
    else
    return 0;
}

unsigned int String::operator > (String S)
{
    if( strcmp(word,S.word) >  0)
    return 1;
    else
    return 0;
}

String String::operator + (String S)
{
    String Temp = word;
    strcat(Temp.word,S.word);
    return Temp;
}

void main()
{
    String One("Pappu"),Two("Kuppu");
    char* string;
    clrscr();
    /*
    cout<<"Enter a string:\n";
    cin.getline(string,M,'\n');
    One.Accept(string);
    */
    cout<<"\nI.Length of the given string \" ";
    One.Display();
    cout<<" \" is -\n   "
    <<strlen(One)<<" characters";

    cout<<"\nII.String Copy using function"
    <<"\n   Original string : "; One.Display();
    strcpy(Two,One);
    cout<<"\n   Copied string   : "; Two.Display();

    cout<<"\nIII.String Assignment using = operator"
    <<"\n   Original string : "; One.Display();
    cout<<"\n   Enter the string to be assigned : ";
    cin.getline(string,M,'\n');
    Two = string;
    cout<<"\n   String to be assigned = "; Two.Display();
    One = Two;
    cout<<"\n   Original String after assignment : "; Two.Display();

    cout<<"\nIV.String Concatenation using + operator\n"
    <<"    Enter the string to be concatenated with \" ";
    One.Display();
    cout<<" \" : ";
    cin.getline(string,M,'\n');
    Two = string;
    {
        String Three = One + Two;
    cout<<"    String after concatenation : ";
        Three.Display();
    }


    cout<<"\nIV.String Comparison";
    cout<<"\n   Enter the strings to be compared -\n"
    <<"     First String  : ";
    cin.getline(string,M,'\n');
    One = string;
    cout<<"     Second String : ";
    cin.getline(string,M,'\n');
    Two = string;

    cout<<"\n    ";
    if(One == Two)
    cout<<"The two strings are equal";
    else if( One < Two)
    cout<<"First string is smaller than the Second one";
    else if( One > Two)
    cout<<"First string is bigger than the Second one";
    else
    cout<<"Unspecified Error!\nComparison not possible.\n";

    cout<<"\nPress any key....";
    getch();
}

/*OUTPUT

*/