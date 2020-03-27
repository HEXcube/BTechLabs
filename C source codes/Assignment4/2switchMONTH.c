/*Program to display the name of mont for the corresponding
number inputed*/
void main()
{
unsigned int month;                //The number of month
clrscr();
printf("Enter a number(1-12) to see the corresponding month:");
scanf("%u",&month);
printf("The month %u is ",month);
switch(month)
{
case 1 :printf("January");break;
case 2 :printf("February");break;
case 3 :printf("March");break;
case 4 :printf("April");break;
case 5 :printf("May");break;
case 6 :printf("June");break;
case 7 :printf("July");break;
case 8 :printf("August");break;
case 9 :printf("September");break;
case 10:printf("October");break;
case 11:printf("November");break;
case 12:printf("December");break;
default:printf("Invalid!");
}
printf("\nPress any key....");
getch();
}
 
