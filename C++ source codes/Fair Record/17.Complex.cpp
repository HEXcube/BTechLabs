//Create a class complex and perform sum of two complex numbers.

#include<iostream.h>
#include<conio.h>

class complex
{
int real,img;
static unsigned int i;
public:

complex()
{
 cout<<"Enter the real and imaginary part of number "<<i<<" :\n";
 cin>>real>>img;
 i++;
}

friend void sum(complex,complex);

};
unsigned int complex::i=1;

void sum(complex A,complex B)
{
 cout<<"Sum of numbers: "<<A.real+B.real
     <<"+"<<A.img+B.img<<"i";
}

void main()
{
 clrscr();

 complex C[2];
 sum(C[0],C[1]);

 getch();
}

/*OUTPUT
Enter the real and imaginary part of number 1 :
23 45
Enter the real and imaginary part of number 2 :
23 67
Sum of numbers: 46+112i
*/