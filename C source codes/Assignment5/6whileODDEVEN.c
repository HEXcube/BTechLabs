/*Program to display all odd and even numbers in the given range.*/
void main()
{
unsigned int lim1,lim2,i;       //lim1 and lim2 are the upper and lower limits
clrscr();
printf("Enter the lower and upper limits : ");
scanf("%u%u",&lim1,&lim2);
if(lim2<lim1)
{
 printf("Input Error!\nUpper limit less than lower limit");
 goto end;
}
printf("\nThe odd numbers between %u and %u are :\n",lim1,lim2);
i=((lim1%2)?lim1+2:lim1+1);
while(i<lim2)
{
 printf("%u\t",i);
 i+=2;
}
printf("\n\nThe even numbers between %u and %u are :\n",lim1,lim2);
i=((lim1%2)?lim1+1:lim1+2);
while(i<lim2)
{
 printf("%u\t",i);
 i+=2;
}
end:
printf("\nPress any key..... ");
getch();
}