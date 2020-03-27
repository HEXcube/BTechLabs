//Program to demonstrate multi level inheritance

#include<iostream.h>
#include<conio.h>

class Parent
{
protected:
    char name[16];
    int age;
};

class L1_Child:public Parent
{
protected:
    float height;
    float weight;
};

class L2_Child:public L1_Child
{
protected:
    char gender;
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
    cout<<"Height(in feet): ";cin>>height;
    cout<<"Weight(in Kg): ";cin>>weight;
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
    cout<<"\nHeight : "<<height<<" Feet"
	<<"\nWeight : "<<weight<<" Kg";
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
Enter the details of student -
Name :Pappu P.K                                                                 
Age  :15                                                                        
Gender-                                                                         
	1 for male
        0 for female                                                            
        Any other for Others                                                    
        Enter now : 1                                                           
Height(in feet): 8                                                              
Weight(in Kg): 100                                                              
                                                                                
Name : Pappu P.K                                                                
Age  : 15                                                                       
Gender : Others                                                                 
Height : 8 Feet                                                                 
Weight : 100 Kg                                                                 
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
