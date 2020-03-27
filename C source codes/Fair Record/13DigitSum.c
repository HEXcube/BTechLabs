/*Progrm to find the sum of digits of a given number*/

void main()
{
unsigned long a,b;           //a is the number to be inputed
unsigned int S=0;            //S is sum
clrscr();

printf("Enter a number:");
scanf("%lu",&a);

for(b=a;b>0;b/=10)
{
S+=(b%10);
}

printf("\nThe sum of digits of %lu=%u",a,S);
getch();
}

/*OUTPUT
Enter a number:231456

The sum of digits of 231456=21
*/
