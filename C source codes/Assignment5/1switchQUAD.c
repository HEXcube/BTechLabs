/*Program to find the roots of a quadratic equation using switch()*/
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
if(d>0)ch=1;
else
 if(d<0)ch=2;
 else ch=0;
switch(ch)
{
case 1:x1=(-b+sqrt(d))/(2*a);
       x2=(-b-sqrt(d))/(2*a);
       printf("The roots of the given quadratic equation"
       " are %f and %f,which are real and distinct.",x1,x2);
       break;
case 2:x1=sqrt(-d)/(2*a);
       printf("The roots of the given quadratic equation"
       " are %f+%fi and %f-%fi,which are imaginary.",-b/(2*a),x1,-b/(2*a),x1);
       break;
default:x1=-b/(2*a);
	printf("The roots of the given quadratic equation"
       " are %f and %f,which are real but equal.",x1,x1);
}
printf("\nPress any key.....");
getch();
}



 