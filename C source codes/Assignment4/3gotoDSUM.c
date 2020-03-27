/*Progrm to find the sum of digits of a given number*/
void main()
{
unsigned long a,b;           //a is the number to be inputed
unsigned int S=0;            //S is sum,i is the loop conroller
clrscr();
printf("Enter a number:");
scanf("%lu",&a);
b=a;
target:
{
S+=(b%10);
b=b/10;
}
if(b>0)
goto target;
printf("\nThe sum of digits of %lu=%u",a,S);
getch();
}
