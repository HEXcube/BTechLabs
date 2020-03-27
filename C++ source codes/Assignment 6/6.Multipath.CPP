//Program to demonstrate multipath inheritance

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class PersonalComputer
{
protected:
    char ModelName[16],Manufacturer[21],Processor[16];
    unsigned int RAM;
public:
    void SetPC()
    {
        cout<<"\nEnter model name      : ";
        cin.getline(ModelName,15);
        cout<<"Enter manufacturer name : ";
        cin.getline(Manufacturer,20);
        cout<<"Enter processor name    : ";
        cin.getline(Processor,15);
        cout<<"Enter RAM in MegaBytes  : ";
        cin>>RAM;
    }

    void GetPC()
    {
        cout<<"Model Name   : "<<ModelName<<endl
            <<"Manufacturer : "<<Manufacturer<<endl
            <<"Processor    : "<<Processor<<endl
            <<"RAM          : "<<RAM<<" MB";
    }
};

class SmartFone : public virtual PersonalComputer
{
protected:
    char Support3G,Network;
    float BluetoothVersion;
public:
    void SetSmartFone()
    {
        SetPC();
        cout<<"\nIs 3G Supported?\n"
        <<"Press Y for yes and any other key for no : ";
        cin>>Support3G;
        Support3G=='Y'||Support3G=='y'?
        Support3G=1:Support3G=0;

        cout<<"Enter Bluetooth version : ";
        cin>>BluetoothVersion;

        cout<<"Enter Network Type-\n"
        <<"1.Press G for GSM\n"
        <<"2.Press C for CDMA\n"
        <<"3.Press any other key for other networks\n"
        <<"Enter your choice : ";
        cin>>Network;
        if(Network=='G'||Network=='g')
        { Network = 1; }
        else if(Network=='C'||Network=='c')
        { Network = 2; }
        else
        { Network = 0; }
    }

    void GetSmartFone()
    {
        GetPC();
        cout<<"\n3G Support   : ";
        Support3G==1?cout<<"Yes\n":cout<<"No\n";
        cout<<"Bluetooth version : "<<setprecision(1)
        <<BluetoothVersion<<endl;
        cout<<"Network Type : ";
        if(Network==1)
        { cout<<"GSM"; }
        else if(Network==2)
        { cout<<"CDMA"; }
        else
        { cout<<"Other"; }
    }
};

class Laptop :public virtual PersonalComputer
{
protected:
    char Wifi;
    unsigned ScreenWidth;
    unsigned ScreenHeight;
public:
    void SetLaptop()
    {
        SetPC();
        cout<<"\nIs Wifi Supported?\n"
        <<"Press Y for yes and any other key for no : ";
        cin>>Wifi;
        Wifi=='Y'||Wifi=='y'?
        Wifi=1:Wifi=0;

        cout<<"Enter Screen Width in pixels  : ";
        cin>>ScreenWidth;
        cout<<"Enter Screen Height in pixels : ";
        cin>>ScreenHeight;
    }
    
    void GetLaptop()
    {
        GetPC();
        cout<<"\nWifi         : ";
        Wifi==1?cout<<"Yes\n":cout<<"No\n";
        cout<<"Screen Size   : "<<ScreenWidth<<'x'<<ScreenHeight;
    }
};

class Palmtop : public SmartFone,public Laptop
{
    char Sync;
public:
    void SetPalmtop()
    {
        SetPC();
        SetSmartFone();
        SetLaptop();
        cout<<"Does the device support Synchronisation?\n"
        <<"If yes:\n\t"
        <<"1.Press P for PC Sync\n\t"
        <<"2.Press S for Server Sync\n\t"
        <<"3.Press X for Both\n"
        <<"If no, press any other key\n"
        <<"Enter your choice : ";
        cin>>Sync;
        if(Sync=='P'||Sync=='p')
        { Sync = 1; }
        else if(Sync=='S'||Sync=='s')
        { Sync = 2; }
        else if(Sync=='X'||Sync=='x')
        { Sync = 3; }
        else
        { Sync = 0; }
    }

    void GetPalmtop()
    {
        GetPC();
        GetSmartFone();
        GetLaptop();
        cout<<"\nSynchronisation : ";
        if(Sync==1)
        { cout<<"PC Sync"; }
        else if(Sync==2)
        { cout<<"Server Sync"; }
        else if(Sync==3)
        { cout<<"Both PC & Server Sync"; }
        else
        { cout<<"None"; }
    }
};

void main()
{
    SmartFone S;
    Laptop L;
    Palmtop P;
    clrscr();

    S.SetSmartFone();
    S.GetSmartFone();
    
    L.GetLaptop();
    L.GetLaptop();

    P.GetPalmtop();
    P.GetPalmtop();

    getch();
}