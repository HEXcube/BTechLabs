/*Program to check whether the given number is perfect or not.
A perfect number is one whose sum of all factors except the
number itself will produce the same number*/
void main()
{
unsigned int num,i=1,s=0;       //num is the number to be checked
clrscr();
printf("Enter the number : ");
scanf("%u",&num);
while(i<num)
{
 if(!(num%i))
 {
  s=s+i;
 }
 i++;
}
printf("%u is a ",num);
(s==num)?printf("perfect number"):printf("nonperfect number.");
printf("\nPress any key..... ");
getch();
}