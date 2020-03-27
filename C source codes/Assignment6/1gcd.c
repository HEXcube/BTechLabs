/*Program to find the Geatest Common Divisor  of 2 numbers*/
void main()
{
unsigned int num1,num2,gcd,i=1; //the numbers to be inputed.gcd is Greatest Common Divisor
clrscr();
printf("Enter two numbers : ");
scanf("%u %u",&num1,&num2);
while(i<=(num1<num2?num1:num2))
{
if(!(num1%i)&&!(num2%i))
gcd=i;
i++;
}
printf("The Greatest Common Divisor of %d and %d is %d",num1,num2,gcd);
printf("\nPress any key..... ");
getch();
}