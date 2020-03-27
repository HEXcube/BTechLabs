/*Find the area of rectangle, triangle and sphere.
  Use function overloading*/

#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>

unsigned int area(unsigned int,unsigned int);      //rectangle
float area(unsigned int,unsigned int,unsigned int);//triangle
float area(float);                                 //sphere

void main()
{
 unsigned int l,b,h;
 float r;
 clrscr();

cout<<"I.Rectangle\n"
    <<"Enter length and breadth : ";
      cin>>l>>b;
      cout<<"Area of Rectangle = "<<area(l,b)
	  <<" square units\n\n";

cout<<"II.Triangle\n"
    <<"Enter lengths of the 3 sides : ";
      cin>>l>>b>>h;
      cout<<"Area of Triangle  = "<<setprecision(3)<<area(l,b,h)
	  <<" square units\n\n";

cout<<"III.Sphere\n"
    <<"Enter the radius : ";
      cin>>r;
      cout<<"Surface Area of Sphere = "<<setprecision(3)<<area(r)
	  <<" square units";

 getch();
}

unsigned int area(unsigned int l,unsigned int b)
{
 return l*b;
}

float area(unsigned int a,unsigned int b,unsigned int c)
{
 float S;
 S=(a+b+c)/2.0;
 return sqrt( (S-a)*(S-b)*(S-c) )*S;
 //Area of triangle = S√(S-a)x(S-b)x(S-c)
}

float area(float radius)
{
 return 4*(22/7.0)*radius*radius;
 //Surface area of Sphere = 4πr^2
}

/*OUTPUT
I.Rectangle
Enter length and breadth : 3 4
Area of Rectangle = 12 square units

II.Triangle
Enter lengths of the 3 sides : 2 3 4
Area of Triangle  = 6.162 square units

III.Sphere
Enter the radius : 5
Surface Area of Sphere = 314.286 square units
*/