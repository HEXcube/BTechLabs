/*Program to find the average of n numbers*/
void main()
{
int num;                 //num is the number to be inputed.
long s=0;                  //s is the sum of the given numbers.
unsigned int n=0,lim;    //n is the loop control variable and lim is the limit
clrscr();
printf("Enter the limit : ");
scanf("%u",&lim);
while(n<lim)
{
 printf("Enter the number%d : ",n+1);
 scanf("%u",&num);
 s=s+num;
 n++;
}
printf("The average of the numbers is :%f",(float)s/lim);
printf("\nPress any key..... ");
getch();
}