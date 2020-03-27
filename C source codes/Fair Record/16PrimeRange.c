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

printf("\nThe prime numbers between %u and %u are :\n",lim1,lim2);
for(i=lim1;i<lim2;i++)
{
 flag=1;
 for(j=2;j<i/2;j++)
  if(!(i%j))
  {
   flag=0;
   break;
  }
 if(flag)
 printf("%u ",i);
}

end:
printf("\nPress any key..... ");
getch();
}

/*OUTPUT
Enter the lower and upper limits : 12 45

The prime numbers between 12 and 45 are :
13 17 19 23 29 31 37 41 43
Press any key.....
*/