//Program to demonstrate multi level inheritance

#include<iostream.h>
#include<conio.h>

class Parent
{
protected:
    char name[16];
};

class L1_Child:public Parent
{
protected:
    int age;
};

class L2_Child:public L1_Child
{
    unsigned gender;
public:
    void get()
    {
        cout<<"Enter the details of student -\n";
        cout<<"Name :";cin.getline(name,15);
        cout<<"Age  :";cin>>age;
        cout<<"Gender- "
            <<"\n\t1 for male"
	    <<"\n\t0 for female"
	    <<"\n\tAny other for Others"
	    <<"\n\tEnter now : ";cin>>gender;
    }

    void disp()
    {
	cout<<"\nName : "<<name
	    <<"\nAge  : "<<age
	    <<"\nGender : ";
	if(gender!=0)
	    gender==1?cout<<"Male":cout<<"Others";
	else
	    cout<<"Female";
    }
};

void main()
{
    clrscr();

    L2_Child X;
    X.get();
    X.disp();

    getch();
}

/*OUTPUT
Enter the details of student -
Name :Naveen P.K
Age  :15
Gender-
    1 for male
    0 for female
    Any other for Others
    Enter now : 1

Name : Naveen P.K
Age  : 15
Gender : Male
*/