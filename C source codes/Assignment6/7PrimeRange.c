/*Program to display all prime numbers between a range*/
void main()
{
unsigned int lim1,lim2,i,j,flag;       //lim1 and lim2 are the upper and lower limits
clrscr();
printf("Enter the lower and upper limits : ");
scanf("%u%u",&lim1,&lim2);
if(lim2<lim1)
{
 printf("Input Error!\nUpper limit less than lower limit");
 goto end;
}
i=lim1;
printf("\nThe prime numbers between %u and %u are :\n",lim1,lim2);
while(i<lim2)
{
 flag=1;
 j=2;
 while(j<i/2)
 {
  if(!(i%j))
  {
   flag=0;
   break;
  }
  j++;
 }
 if(flag)
 printf("%u ",i);
 i++;
}
end:
printf("\nPress any key..... ");
getch();
}