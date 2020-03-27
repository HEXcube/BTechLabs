/*Create a class distance and perform normalization and sum of two
  distances*/

#include<iostream.h>
#include<conio.h>

class Distance
{
 unsigned int metre,kilom;
 void normalize();
 public:

 Distance()
 {
  metre=0;
  kilom=0;
 }

 Distance(unsigned int x,unsigned int y)
 {
  kilom=x;
  metre=y;
  normalize();
 }

 void Display();

 friend Distance Disum(Distance,Distance);
};

void Distance::Display()
{
 cout <<kilom<<" kilometres "<<metre<<" metres";
}

void Distance::normalize()
{
 kilom=kilom+(metre/1000);
 metre=metre%1000;
}

Distance AcceptDistance()
{
    unsigned int x,y;
    cin>>x>>y;
    Distance X(x,y);
    return X;
}

Distance Disum(Distance A,Distance B)
{
    Distance C;
    C.metre=A.metre+B.metre;
    C.kilom=A.kilom+B.kilom;
    C.normalize();
    return C;
}

void main()
{
    clrscr();
    Distance A,B,C;
    cout<<"Enter the first distance in kilometres and metres  : ";
    A=AcceptDistance();
    cout<<"Enter the second distance in kilometres and metres : ";
    B=AcceptDistance();

    cout<<"The distances entered are:"
        <<"\nFirst distance  : ";
        A.Display();
    cout<<"\nSecond distance : ";
        B.Display();
    cout<<"\n\nThe sum of two distances = ";
    C=Disum(A,B);
    C.Display();

    getch();
}

/*OUTPUT
Enter the first distance in kilometres and metres  : 25 3500
Enter the second distance in kilometres and metres : 13 7580
The distances entered are:
First distance  : 28 kilometres 500 metres
Second distance : 20 kilometres 580 metres

The sum of two distances = 49 kilometres 80 metres
*/

