/*Program to check whether the inputed character is equal to 'y'*/
void main()
{
char ch;
clrscr();
printf("Enter a character : ");
scanf("%c",&ch);
if(ch=='y'||ch=='Y')
printf("Yes,the given character is 'y'.");
else
printf("No,the given character is not 'y'.");
getch();
}