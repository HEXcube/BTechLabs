/*Overload += operator to add two Time classes.*/
#include<iostream.h>
#include<conio.h>
class Time
{
    unsigned int hour,min,sec;
public:
    Time()
    {
        hour=min=sec=0;
    }
    Time(unsigned int x,unsigned int y,unsigned int z)
    {
        hour=x;
        min=y;
        sec=z;
    }
    void setter()
    {
        cout<<"Enter the time in the format Hour Minute Second:";
        cin>>hour>>min>>sec;
    }
    void getter()
    {
        cout<<hour<<':'<<min<<':'<<sec;
    }
    void normalize()
    {
        min=min+sec/60;
        sec=sec%60;
        hour=hour+=min/60;
        min=min%60;
    }

    void operator += (Time K)
    {
        hour+=K.hour;
        min+=K.min;
        sec+=K.sec;
    }
};

void main()
{
    Time T1;
    unsigned int a,b,c;

    clrscr();
    T1.setter();
    T1.normalize();
    cout<<"Enter another time in the format Hour Minute Second:";
    cin>>a>>b>>c;
    Time T2(a,b,c);
    T2.normalize();

    cout<<"\nTime 1 : ";T1.getter();
    cout<<"\nTime 2 : ";T2.getter();

    T1+=T2;
    T1.normalize();
    cout<<"\nValue after performing += operation on Time 1 and 2 : ";
    T1.getter();

    cout<<"\n\nPress any key....";
    getch();
}

/*OUTPUT
Enter the time in the format Hour Minute Second:40 70 90
Enter another time in the format Hour Minute Second:30 10 10

Time 1 : 41:11:30
Time 2 : 30:10:10
Value after performing += operation on Time 1 and 2 : 71:21:40

Press any key....
*/