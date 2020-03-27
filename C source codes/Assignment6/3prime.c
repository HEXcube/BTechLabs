/*Program to check whether the given number is prime or not.*/
void main()
{
unsigned int num,i=2,flag=0;       //num isthe number to be checked
clrscr();
printf("Enter the number : ");
scanf("%u",&num);
while(i<num/2)
{
 if(!(num%i))
 {
  flag=1;
  break;
 }
 i++;
}
printf("%u is a ",num);
flag?printf("composite number."):printf("prime number.");
printf("\nPress any key..... ");
getch();
}