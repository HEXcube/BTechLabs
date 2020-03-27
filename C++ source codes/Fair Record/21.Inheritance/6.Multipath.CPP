//Program to demonstrate multipath inheritance

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>

class PersonalComputer
{
protected:
    char ModelName[16],Processor[16];
};

class SmartFone : public virtual PersonalComputer
{
protected:
    char Support3G;
};

class Laptop :public virtual PersonalComputer
{
protected:
    char Wifi;
};

class Tablet : public SmartFone,public Laptop
{
public:
    void SetTablet()
    {
        cout<<"\nEnter Tablet's Details-\n";
        cout<<"\nEnter model name      : ";
        cin.getline(ModelName,15);
        cout<<"Enter processor name    : ";
        cin.getline(Processor,15);

        cout<<"\nIs 3G Supported?\n"
        <<"Press Y for yes and any other key for no : ";
        cin>>Support3G;
        if(Support3G=='Y'||Support3G=='y')
        Support3G=1;
        else
        Support3G=0;

        cout<<"\nIs Wifi Supported?\n"
        <<"Press Y for yes and any other key for no : ";
        cin>>Wifi;
        if(Wifi=='Y'||Wifi=='y')
        Wifi=1;
        else
        Wifi=0;
    }

    void GetTablet()
    {
        cout<<"\nTablet's Details-\n";
        cout<<"Model Name   : "<<ModelName<<endl
        <<"Processor    : "<<Processor<<endl;

        cout<<"3G Support   : ";
        if(Support3G==1)
        cout<<"Yes\n";
        else
        cout<<"No\n";

        cout<<"Wifi         : ";
        if(Wifi==1)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
};

void main()
{
    Tablet P;
    clrscr();

    P.SetTablet();
    P.GetTablet();

    getch();
}

/*OUTPUT
Enter Tablet's Details-

Enter model name      : Galaxy
Enter processor name    : Snap Dragon

Is 3G Supported?
Press Y for yes and any other key for no : y

Is Wifi Supported?
Press Y for yes and any other key for no : y

Tablet's Details-
Model Name   : Galaxy
Processor    : Snap Dragon
3G Support   : Yes
Wifi         : Yes
*/