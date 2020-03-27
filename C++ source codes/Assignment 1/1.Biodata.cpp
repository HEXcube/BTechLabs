//Display Biodata in a suitable format

#include<iostream.h>
#include<conio.h>
#define M 50

void main()
{
 unsigned int year,month,day,gender,hnumber;
 unsigned long int PIN,salary,fno,mno,yno;
 char name[M],father[M],mother[M],guardian[M],relation[M],hname[M],
      place[M],district[M],state[M],country[M],job[M],qual[M],nation[M];
 clrscr();

 //INPUT Phase
 cout<<"Enter your name   : ";cin>>name;
 cout<<"Enter your date of birth(in numbers)-"<<endl;
 cout<<"\tYear : ";cin>>year;
 cout<<"\tMonth: ";cin>>month;
 cout<<"\tDay  : ";cin>>day;
 cout<<"Enter your gender- " 
     <<"\n\t1 for male"
     <<"\n\t0 for female"
     <<"\n\tAny other for Others"
     <<"\n\tEnter now : ";cin>>gender;
 cout<<"Enter your nationality : ";cin>>nation;

 cout<<"\nEnter the name of your-"<<endl;
 cout<<"\tFather   : ";cin>>father;
 cout<<"\tMother   : ";cin>>mother;
 cout<<"\tGuardian : ";cin>>guardian;
 cout<<"The relation of guardian with you-";cin>>relation;
 cout<<"Enter your address-"<<endl;
 cout<<"\tHouse name  : ";cin>>hname;
 cout<<"\tHouse number: ";cin>>hnumber;
 cout<<"\tPlace       : ";cin>>place;
 cout<<"\tDistrit     : ";cin>>district;
 cout<<"\tState       : ";cin>>state;
 cout<<"\tCountry     : ";cin>>country;
 cout<<"\tPIN number  : ";cin>>PIN;

 cout<<"\n\tEnter your current occupation    : ";cin>>job;
 cout<<"\tEnter your salary                : ";cin>>salary;
 cout<<"\tEnter your highest qualification : ";cin>>qual;
 cout<<"\nEnter the contact phone numbers of your-";
 cout<<"\n\tFather  : ";cin>>fno;
 cout<<"\tMother  : ";cin>>mno;
 cout<<"\tYour    : ";cin>>yno;

 //OUTPUT Phase
clrscr();
cout<<"BIODATA"
       <<"\nName   : "<<name
       <<"\nDate of birth(in DD-MM-YYYY format):"
       <<day<<' '<<month<<' '<<year
       <<"\nGender : ";
       if(gender!=0)
        gender==1?cout<<"Male":cout<<"Others";
       else
        cout<<"Female";
cout<<"\nNationality : "<<nation<<endl;

cout<<"\nName of  -"
    <<"\n\tFather   : " <<father
    <<"\n\tMother   : " <<mother
    <<"\n\tGuardian : " <<guardian
    <<"\nRelation with guardian :" <<relation
    <<"\nAddress-\n"
    <<hname<<endl
    <<"House no "<<hnumber<<endl
    <<place<<endl
    <<district<<endl
    <<state<<endl
    <<country<<endl
    <<"PIN number - "<<PIN<<endl

    <<"\nCurrent occupation    : "<<job
    <<"\nSalary                : "<<salary
    <<"\nHighest qualification : "<<qual
    <<"\nContact phone numbers of -"
    <<"\n\tFather  : " <<fno
    <<"\n\tMother  : " <<mno
    <<"\n\tYou     : " <<yno;

 getch();
}