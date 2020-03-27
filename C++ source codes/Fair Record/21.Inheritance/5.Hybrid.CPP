//Program to demonstrate hybrid inheritance

#include<iostream.h>
#include<conio.h>

#define M 21
#define S 41

class Robot
{
protected:
    char ModelName[M];
public:
    void SetRobot()
    {
        cout<<"\nEnter model name        : ";
        cin>>ModelName;
    }

    void GetRobot()
    {
        cout<<"\nModel Name   : "<<ModelName;
    }
};

class Organism
{
protected:
    char ScientificName[S];
};

class NanoBot : public Robot
{
protected:
    unsigned int size;
public:
    void SetSize()
    {
        SetRobot();
        cout<<"Enter size in nanometres: ";
        cin>>size;
    }

    void GetSize()
    {
        GetRobot();
        cout<<"\nSize         : "<<size<<" nm"<<endl;
    }
};

class Android : public Robot
{
protected:
    int anthropogenecity;
public:
    void SetAndroid()
    {
        SetRobot();
        cout<<"Enter Anthropogenecity Level : ";
        cin>>anthropogenecity;
    }

    void GetAndroid()
    {
        GetRobot();
        cout<<"\nAnthropogenecity : "<<anthropogenecity<<endl;
    }
};

class  Cyborg : public  Robot, public Organism
{
public:
    void SetCyborg()
    {
        SetRobot();
        cout<<"Enter the base organism's Scientific name : ";
        cin>>ScientificName;
    }
    void GetCyborg()
    {
        GetRobot();
        cout<<"\nBase organism's Scientific Name : "<<ScientificName<<endl;
    }
};

void main()
{
    NanoBot N;
    Android A;
    Cyborg C;
    clrscr();

    cout<<"\nEnter details of NanoBot";
    N.SetSize();

    cout<<"\nEnter details of Android";
    A.SetAndroid();

    cout<<"\nEnter details of Cyborg";
    C.SetCyborg();

    cout<<"\nDetails of NanoBot";
    N.GetSize();

    cout<<"\nDetails of Android";
    A.GetAndroid();

    cout<<"\nDetails of Cyborg";
    C.GetCyborg();

    getch();
}

/*OUTPUT

Enter details of NanoBot
Enter model name        : NanoPet12
Enter size in nanometres: 234

Enter details of Android
Enter model name        : HomoNEX-G2
Enter Anthropogenecity Level : 78

Enter details of Cyborg
Enter model name        : BioMech-45b
Enter the base organism's Scientific name : Homo_Sapiens

Details of NanoBot
Model Name   : NanoPet12
Size         : 234 nm

Details of Android
Model Name   : HomoNEX-G2
Anthropogenecity : 78

Details of Cyborg
Model Name   : BioMech-45b
Base organism's Scientific Name : Homo_Sapiens
*/