/*Program to find the largest of given numbers*/
void main()
{
unsigned long lst=0,num;       //lst is the largest number and num is the inputed number.
unsigned int n=1,lim;    //n is the loop control variable and lim is the limit.
clrscr();
printf("Enter the limit : ");
scanf("%u",&lim);
target:
if(n<=lim)
{
printf("Enter the number%u : ",n);
scanf("%lu",&num);
if(num>lst)lst=num;
n++;
goto target;
}
printf("The largest number is : %lu",lst);
getch();
}

