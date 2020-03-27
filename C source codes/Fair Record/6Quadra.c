/*Program to find the roots of a quadratic equation (ax^2+bx+c).*/
#include<math.h>
void main()
{
char ch;
float x1,x2,a,b,c,d;
clrscr();
printf("This is a program to find the roots of a 2nd degree "
	"\nquaratic equation of the form ax^2+bx+c\n"
         "Enter the values of a,b,c respectively : ");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-4*a*c;
if(d>0)
{
 x1=(-b+sqrt(d))/(2*a);
 x2=(-b-sqrt(d))/(2*a);
 printf("The roots of the given quadratic equation"
	" are\n%.2f and %.2f,which are real and distinct.",x1,x2);
}
else if(d<0)
{
 x1=sqrt(-d)/(2*a);
 printf("The roots of the given quadratic equation"
	" are\n%.2f+%.2fi and %.2f-%.2fi,which are imaginary.",-b/(2*a),x1,-b/(2*a),x1);
}
else
{
 x1=-b/(2*a);
 printf("The roots of the given quadratic equation"
	" are\n%.2f and %.2f,which are real but equal.",x1,x1);
}

printf("\nPress any key.....");
getch();
}

/*OUTPUT
This is a program to find the roots of a 2nd degree
quaratic equation of the form ax^2+bx+c
Enter the values of a,b,c respectively : 1 0 4
The roots of the given quadratic equation are
-0.00+2.00i and -0.00-2.00i,which are imaginary.
Press any key.....
*/