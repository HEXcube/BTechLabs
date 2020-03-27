/*Program to accept and display the Biodata using class
  and constructors*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>         //for flushall()

#define M 50


class Biodata
{
 unsigned int year,month,day,gender;
 unsigned long PIN,fno,mno,yno,salary; 
 char name[M],house[M],place[M],POname[M],dist[M],state[M],country[M],
      nation[M],father[M],mother[M],guardian[M],relation[M],job[M],qual[M];

public:
Biodata();
void Display();
}

Biodata::Biodata()
{
cout<<"Enter your name : ";cin>>name;
cout<<"Enter your date of birth in YYYY-MM-DD format\n"
    <<"Year :";cin>>year; 
cout<<"Month:";cin>>month;
cout<<"Day  :";cin>>day;
cout<<"Enter your address-\n"
    <<"\tHouse Name :";cin>>house;
cout<<"\tPlace      :";cin>>place;
cout<<"\tP.O Name   :";cin>>POname;
cout<<"\tDistrict   :";cin>>dist;
cout<<"\tState      :";cin>>state;
cout<<"\tCountry    :";cin>>country;
cout<<"\tPIN number :";cin>>PIN;

cout<<"\nNationality : ";cin>>nation;
cout<<"Gender  - \n"
    <<"\t0 for male\n"
    <<"\t1 for female\n"
    <<"\tany number for others\n"
    <<"Enter :";cin>>gender;
cout<<"Father's Name   : ";cin>>father;
cout<<"Mother's Name   : ";cin>>mother;
cout<<"Guardian's Name : ";cin>>guardian;
cout<<"Guardian's relationship : ";cin>>relation;

cout<<"\nCurrent Occupation    : ";cin>>job;
cout<<"Salary                : ";cin>>salary;
cout<<"Highest Qualification : ";cin>>qual;

cout<<"\nContact Phone Numbers-\n"
    <<"Father  :";cin>>fno;
cout<<"Mother  :";cin>>mno;
cout<<"Your    :";cin>>yno;
}

void Biodata::Display()
{
clrscr();
cout<<endl
    <<"\t\t\t  BIODATA\n"<<endl
    <<"Name : "<<name<<endl
    <<"Date of birth in DD-MM-YYYY format\n"
    <<day<<'-'<<month<<'-'<<year<<endl
    <<"Address-\n"
    <<"\tHouse Name :" <<house<<endl 
    <<"\tPlace      :" <<place<<endl 
    <<"\tP.O Name   :" <<POname<<endl 
    <<"\tDistrict   :" <<dist<<endl 
    <<"\tState      :" <<state<<endl 
    <<"\tCountry    :" <<country<<endl 
    <<"\tPIN number :" <<PIN<<endl 

    <<"\nNationality : "<<nation<<endl
    <<"Gender       : ";
    if(gender)
    gender==1 ? cout<<"male"
    :cout<<"Others";
    else
    cout<<"female";
    
cout<<"\nFather's Name   : " <<father<<endl
    <<"Mother's Name   : " <<mother<<endl
    <<"Guardian's Name : " <<guardian<<endl
    <<"Guardian's relationship : " <<relation<<endl

    <<"\nCurrent Occupation    : " <<job<<endl
    <<"Salary                : " <<salary<<endl
    <<"Highest Qualification : " <<qual<<endl

    <<"\nContact Phone Numbers-\n"
    <<"Father  :" <<fno<<endl 
    <<"Mother  :" <<mno<<endl 
    <<"Your    :" <<yno<<endl;
}

void main()
{
 clrscr();
 Biodata A;
 A.Display();

 flushall();
 getch();
}

/*OUTPUT
Enter your name : Batman
Enter your date of birth in YYYY-MM-DD format
Year :2020
Month:4
Day  :23
Enter your address-
        House Name :Batcave
        Place      :GothamCity
        P.O Name   :GothamPost
        District   :GothamDist
        State      :WestState
        Country    :USA
        PIN number :101

Nationality : nil
Gender  -
        0 for male
        1 for female
        any number for others
Enter :0
Father's Name   : Wayne
Mother's Name   : Payne
Guardian's Name : Willian
Guardian's relationship : Uncle

Current Occupation    : CrimeFight
Salary                : 0
Highest Qualification : NA

Contact Phone Numbers-
Father  :0
Mother  :0
Your    :101
                          BIODATA

Name : Batman
Date of birth in DD-MM-YYYY format
23-4-2020
Address-
        House Name :Batcave
        Place      :GothamCity
        P.O Name   :GothamPost
        District   :GothamDist
        State      :WestState
        Country    :USA
        PIN number :101

Nationality : nil
Gender       : female
Father's Name   : Wayne
Mother's Name   : Payne
Guardian's Name : Willian
Guardian's relationship : Uncle

Current Occupation    : CrimeFight
Salary                : 0
Highest Qualification : NA

Contact Phone Numbers-
Father  :0
Mother  :0
Your    :101
*/