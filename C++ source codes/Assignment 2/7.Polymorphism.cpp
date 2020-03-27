/*Program to find the area of different figures based on
  the arguments passed*/

#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>

unsigned int area(unsigned int,unsigned int);      //rectangle
float area(unsigned int,unsigned int,unsigned int);//triangle
unsigned long area(unsigned int);     //square
float area(float);          //circle

void main()
{
 unsigned int l,b,h;
 float r;
 clrscr();
 
 cout<<"Which figure's area do you want to compute :\n"
       "1.Rectangle\n"
       "2.Triangle\n"
       "3.Square\n"
       "4.Circle\n"
       "Enter your choice : ";
 cin>>l;
 cout<<endl;

 switch(l)
 {
  case 1 :cout<<"Enter length and breadth : ";
      cin>>l>>b;
      cout<<"Area of Rectangle = "<<area(l,b)
          <<" square units";
      break;
  case 2 :cout<<"Enter lengths of the 3 sides : ";
      cin>>l>>b>>h;
      cout<<"Area of Triangle  = "<<setprecision(3)<<area(l,b,h)
          <<" square units";
      break;
  case 3 :cout<<"Enter length of the side : ";
      cin>>l;
      cout<<"Area of Square    = "<<area(l)
          <<" square units";
      break;
  case 4 :cout<<"Enter the radius : ";
      cin>>r;
      cout<<"Area of Circle    = "<<setprecision(3)<<area(r)
          <<" square units";
      break;
  default:cout<<"Error encountered";
 }

 getch();
}

unsigned int area(unsigned int l,unsigned int b)
{
 return l*b;
}

float area(unsigned int a,unsigned int b,unsigned int c)
{
 float S;
 S=(a+b+c)/2;
 return sqrt( (S-a)*(S-b)*(S-c) )*S;
 //Area of triangle = S√(S-a)x(S-b)x(S-c)
}

unsigned long area(unsigned int a)
{
 return a*a*a;   //Area of square = a^3
}

float area(float radius)
{
 return (22/7.0)*radius*radius;
}