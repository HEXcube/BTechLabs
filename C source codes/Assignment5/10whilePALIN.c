/*Program to check if the given number is a palindrome*/

void main()
{
unsigned long num,rev=0,temp;    //num is the number to be entered
clrscr();
printf("Enter the number : ");
scanf("%lu",&num);
temp=num;
while(temp!=0)
{
  rev*=10;
  rev+=(temp%10);
  temp/=10;
}
printf("\nThe number %lu is ",num);
if(rev==num)
printf("a palindrome.");
else
printf("not a palindrome.");
printf("\nPress any key..... ");
getch();
}







