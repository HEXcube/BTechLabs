/*Program to find the reverse of  given number*/

void main()
{
unsigned long num,rev=0,temp;    //num is the number to be entered and rev is the reverse
clrscr();
printf("Enter the number : ");
scanf("%lu",&num);
temp=num;
target:
if(temp!=0)
{
  rev*=10;
  rev+=(temp%10);
  temp/=10;
  goto target;
}
printf("\nThe reverse of %lu is %lu",num,rev);
getch();
}







