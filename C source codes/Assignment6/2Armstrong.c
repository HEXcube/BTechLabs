/*Program to check whether the given number is an armstrong
number or not.An armstrong number is one whose sum of cubes
of all digits will produce the same number*/
#include<math.h>
void main()
{
unsigned int num,temp,s=0;       //num is the number to be checked
clrscr();
printf("Enter the number : ");
scanf("%u",&num);
temp=num;
while(temp>0)
{
 s+=pow((temp%10),3);
 temp=temp/10;
}
printf("%u is",num);
(s==num)?printf(" "):printf(" not ");
printf("an armstrong number");
printf("\nPress any key..... ");
getch();
}