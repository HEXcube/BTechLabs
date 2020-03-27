//Program to demonstrate hybrid inheritance

#include<iostream.h>
#include<conio.h>

#define M 21
#define S 41

class Robot
{
protected:
    char ModelName[M],Manufacturer[M];
    int AI_Level;
public:
    void SetRobot()
    {
	cout<<"\nEnter model name        : ";
	cin>>ModelName;
        cout<<"Enter manufacturer name : ";
	cin>>Manufacturer;
	cout<<"Enter AI Level          : ";
        cin>>AI_Level;
    }

    void GetRobot()
    {
	cout<<"\nModel Name   : "<<ModelName
	    <<"\nManufacturer : "<<Manufacturer
	    <<"\nAI Level     : "<<AI_Level<<endl;
    }
};

class Organism
{
protected:
    char ScientificName[S];
    unsigned lifespan;
};

class NanoBot : public Robot
{
protected:
    unsigned int size;
public:
    void SetSize()
    {
        cout<<"Enter size in nanometres: ";
        cin>>size;
    }

    void GetSize()
    {
        cout<<"Size         : "<<size<<" nm"<<endl;
    }
};

class Android : public Robot
{
protected:
    int anthropogenecity;
    unsigned height,weight;
public:
    void SetAndroid()
    {
        cout<<"Enter Anthropogenecity Level : ";
        cin>>anthropogenecity;
        cout<<"Enter height(in feet): ";
        cin>>height;
        cout<<"Enter weight(in Kg)  : ";
        cin>>weight;
    }

    void GetAndroid()
    {
        cout<<"Anthropogenecity : "<<anthropogenecity<<endl
        <<"Height           : "<<height<<endl
        <<"Weight           : "<<weight<<endl;
    }
};

class  Cyborg : public  Robot, public Organism
{
protected:
    unsigned integration;
public:
    void SetCyborg()
    {
        cout<<"Enter the base organism's details-\n"
        <<"Scientific name : ";
        cin>>ScientificName;
        cout<<"Lifespan in years : ";
        cin>>lifespan;
        cout<<"Enter level of integration with base organism : ";
        cin>>integration;
    }
    void GetCyborg()
    {
	cout<<"Base organism's details-\n"
	    <<"Scientific Name : "<<ScientificName<<endl
	    <<"Lifespan        : "<<lifespan<<endl
            <<"Level of integration with base organism : "<<integration;
    }
};

void main()
{
    NanoBot N;
    Android A;
    Cyborg C;
    clrscr();

    cout<<"\nEnter details of NanoBot";
    N.SetRobot();
    N.SetSize();

    cout<<"\nEnter details of Android";
    A.SetRobot();
    A.SetAndroid();

    cout<<"\nEnter details of Cyborg";
    C.SetRobot();
    C.SetCyborg();

    cout<<"\nDetails of NanoBot";
    N.GetRobot();
    N.GetSize();

    cout<<"\nDetails of Android";
    A.GetRobot();
    A.GetAndroid();

    cout<<"\nDetails of Cyborg";
    C.GetRobot();
    C.GetCyborg();

    getch();
}

/*OUTPUT
Enter details of NanoBot
Enter model name        : NX-200
Enter manufacturer name : MedCorp
Enter AI Level          : 25
Enter size in nanometres: 400

Enter details of Android
Enter model name        : HomoPal10
Enter manufacturer name : Asimo
Enter AI Level          : 60
Enter Anthropogenecity Level : 79
Enter height(in feet): 7
Enter weight(in Kg)  : 89

Enter details of Cyborg
Enter model name        : CyboHuman-34
Enter manufacturer name : U.S.Military
Enter AI Level          : 89
Enter the base organism's details-
Scientific name : Homo_Sapien
Lifespan in years : 80
Enter level of integration with base organism : 57

Details of NanoBot
Model Name   : NX-200
Manufacturer : MedCorp
AI Level     : 25
Size         : 400 nm

Details of Android
Model Name   : HomoPal10
Manufacturer : Asimo
AI Level     : 60
Anthropogenecity : 79
Height           : 7
Weight           : 89

Details of Cyborg
Model Name   : CyboHuman-34
Manufacturer : U.S.Military
AI Level     : 89
Base organism's details-
Scientific Name : Homo_Sapien
Lifespan        : 8
Level of integration with base organism : 57
*/