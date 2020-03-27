/*Program to display the digits of a number using switch*/
void main()
{
unsigned long num,temp;    //num is the number is the number to be inputed
unsigned int dig,i=0;     //dig stores a digit of num
clrscr();
printf("Enter a number : ");
scanf("%lu",&num);
temp=num;
printf("\nThe digits of the number from right to left are:\n");
while(temp!=0)
{
 i++;
 dig=temp%10;
 temp=temp/10;
 printf("\n");
 switch(i)
 {
  case 1 :printf("First  ");break;
  case 2 :printf("Second ");break;
  case 3 :printf("Third  ");break;
  case 4 :printf("Fourth ");break;
  case 5 :printf("Fifth  ");break;
  case 6 :printf("Sixth  ");break;
  case 7 :printf("Seventh");break;
  case 8 :printf("Eighth ");break;
  case 9 :printf("Ninth  ");break;
  case 10:printf("Tenth  ");break;
  default: printf("Error Encountered!");exit(0);
 }
 printf(" Digit : ");
 switch(dig)
 {
  case 1 :printf("One");break;
  case 2 :printf("Two");break;
  case 3 :printf("Three");break;
  case 4 :printf("Four");break;
  case 5 :printf("Five");break;
  case 6 :printf("Six");break;
  case 7 :printf("Seven");break;
  case 8 :printf("Eight");break;
  case 9 :printf("Nine");break;
  default: printf("Error Encountered!");exit(0);
 }
}
getch();
}