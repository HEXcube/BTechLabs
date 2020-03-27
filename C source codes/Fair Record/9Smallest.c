/*Program to print the smallest among a group of numbers.*/
void main()
{
int smallest=32767,num; //smallest is the smallest number and num is the inputed number.
unsigned int n=0,lim;    //n is the loop control variable and lim is the limit.
clrscr();

printf("Enter the limit : ");
scanf("%d",&lim);

if(!lim)
{
printf("Sorry,there are no numbers to input as the limit is 0.");
goto end;
}

while(n<lim)
{
 printf("Enter the number%u : ",n+1);
 scanf("%d",&num);
 if(num<smallest)
  smallest=num;
 n++;
}
printf("The smallest number is : %d",smallest);

end:
printf("\nPress any key..... ");
getch();
}

/*OUTPUT
Enter the limit : 4
Enter the number1 : 12
Enter the number2 : 45
Enter the number3 : -2
Enter the number4 : 21
The smallest number is : -2
Press any key.....
*/