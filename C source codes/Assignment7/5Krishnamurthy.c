/*Program to display all Krishnamurthy numbers between a range.
A Krishnamurthy nummber is one whose sum of factorials of all
the digits is the number itself*/
void main()
{
unsigned int lim1,lim2,i,j,temp;   //lim1 and lim2 are lower and upper limits
unsigned long s,fact;
clrscr();
printf("Enter the lower and upper limits : ");
scanf("%u%u",&lim1,&lim2);
if(lim2<lim1)
{
 printf("Input Error!\nUpper limit less than lower limit");
 goto end;
}
printf("\nThe Krishnamurthy numbers between %u and %u are :\n",lim1,lim2);
for(i=lim1;i<lim2;i++)
{
 s=0;
 for(temp=i;temp>0;(temp/=10))
 {
  fact=1;
  for(j=temp%10;j>0;j--)
   fact*=j;
  s+=fact;
 }
 if(s==i)
 printf("%u ",i);
}
end:
printf("\nPress any key..... ");
getch();
}