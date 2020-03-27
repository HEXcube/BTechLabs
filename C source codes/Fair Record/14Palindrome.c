/*Program to check whether the given number is a palindrome number.*/

void main()
{
unsigned long num,rev=0,temp;    //num is the number to be entered
clrscr();
printf("Enter the number : ");
scanf("%lu",&num);


for(temp=num ; temp!=0 ; temp/=10)
{
  rev*=10;
  rev+=(temp%10);
}

printf("\nThe number %lu is ",num);
if(rev==num)
 printf("a palindrome.");
else
 printf("not a palindrome.");

printf("\nPress any key..... ");
getch();
}

/*OUTPUT
Enter the number : 1234321

The number 1234321 is a palindrome.
Press any key.....
*/