/*Overload == operator for the class Distance.*/

#include<iostream.h>
#include<conio.h>
class Distance
{
    unsigned int kilom,metre;
public:
    Distance()
    {
        kilom=metre=0;
    }
    Distance(unsigned int x,unsigned int y)
    {
        kilom=x;
        metre=y;
    }
    void setter()
    {
        cout<<"Enter the distance in kilometres and metres : ";
        cin>>kilom>>metre;
    }
    void getter()
    {
        cout<<kilom<<"km "<<metre<<"m";
    }
    void normalize()
    {
        kilom=kilom+metre/1000;
        metre=metre%1000;
    }
    int operator == (Distance K)
    {
        if(K.kilom==kilom && K.metre==metre)
            return 1;
        else
            return 0;
    }
};

void main()
{
    Distance D1;
    unsigned int a,b;

    clrscr();
    cout.put('\n');
    D1.setter();
    D1.normalize();
    cout<<"Enter another distance in kilometres and metres : ";
    cin>>a>>b;
    Distance D2(a,b);
    D2.normalize();

    cout<<"\nDistance 1 : ";D1.getter();
    cout<<"\nDistance 2 : ";D2.getter();

    if(D1==D2)
    {
        cout<<"\nDistances are equal.";
    }
    else
        cout<<"\nDistances are different.";

    cout<<"\n\nPress any key....";
    getch();
}

/*OUTPUT

Enter the distance in kilometres and metres : 35 245
Enter another distance in kilometres and metres : 34 1245

Distance 1 : 35km 245m
Distance 2 : 35km 245m
Distances are equal.

Press any key....
*/