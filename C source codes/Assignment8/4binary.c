/*Program to accept a number and display its binary equivalent*/

void main()
{
unsigned int A[32],i=0;    //i is the loop controller
unsigned long d,temp;        //d is the decimal number
clrscr();

printf("Enter a decimal number : ");
scanf("%lu",&d);

temp=d;
while(temp>0)
{
 A[i]=temp%2;
 temp/=2;
 i++;
}

printf("\nThe binary equivalent of %lu is :\n",d);
for(--i;i;i--)
{
 printf("%u",A[i]);
}
printf("%u",A[0]);

printf("\n\nPress any key.....");
getch();
}