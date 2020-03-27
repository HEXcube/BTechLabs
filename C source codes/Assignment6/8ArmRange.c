/*Program to display all armstrong numbers between a range*/
#include<math.h>
void main()
{
unsigned int lim1,lim2,i,temp,s;       //lim1 and lim2 are the upper and lower limits
clrscr();
printf("Enter the lower and upper limits : ");
scanf("%u%u",&lim1,&lim2);
if(lim2<lim1)
{
 printf("Input Error!\nUpper limit less than lower limit");
 goto end;
}
i=lim1;
printf("\nThe armstrong numbers between %u and %u are :\n",lim1,lim2);
while(i<lim2)
{
 temp=i;
 s=0;
 while(temp>0)
 {
  s+=pow((temp%10),3);
  temp=temp/10;
 }
 if(s==i)
 printf("%u ",i);
 i++;
}
end:
printf("\nPress any key..... ");
getch();
}