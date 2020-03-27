//Program to demonstrate heirarchical inheritance

#include<iostream.h>
#include<conio.h>
#include<string.h>

class Color
{
protected:
    char code[7];
};

class Red : public Color
{
public:
    Red()
    {
	strcpy(code,"FF0000");
	cout<<endl<<"Red   = "<<code<<endl;
    }
};

class Green : public Color
{
public:
    Green()
    {
	strcpy(code,"00FF00");
        cout<<endl<<"Green = "<<code<<endl;
    }
};

class Blue : public Color
{
public:
    Blue()
    {
	strcpy(code,"0000FF");
	cout<<endl<<"Blue  = "<<code<<endl;
    }
};

void main()
{
    clrscr();

    cout<<"Colours and their codes-\n";

    Red R;

    Green G;

    Blue B;

    getch();
}

Colours and their codes-

Red   = FF0000                                                                  
                                                                                
Green = 00FF00                                                                  
                                                                                
Blue  = 0000FF                                                                  
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
