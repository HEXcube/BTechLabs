/*Program to find the smallest of given numbers*/
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
getch();
exit(0);
}
do
{
 printf("Enter the number%u : ",n+1);
 scanf("%d",&num);
 if(num<smallest)
  smallest=num;
 n++;
}while(n<lim);
printf("The smallest number is : %d",smallest);
printf("\nPress any key..... ");
getch();
}

