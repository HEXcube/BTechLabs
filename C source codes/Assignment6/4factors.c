/*Program to display all the factors of a given number*/
void main()
{
unsigned int num,i=1;       //num is the number to be inputed
clrscr();
printf("Enter the number : ");
scanf("%u",&num);
printf("\nThe factors of %u are :\n",num);
while(i<num)
{
 if(num%i==0)
  printf("%u\t",i);
 i++;
}
printf("and\t%u",num);
printf("\nPress any key..... ");
getch();
}