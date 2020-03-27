/*Program to find the category of the inputed character.*/
void main()
{
char ch;
clrscr();
printf("Enter a character : ");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
printf("The given character is an uppercase alphabet.");
else
{
 if(ch>='a'&&ch<='z')
 printf("The given character is a lowercase alphabet.");
 else
 {
  if(ch>='0'&&ch<='9')
  printf("The given character is a numeric character.");
  else
  printf("The given character is a special symbol.");
 }
}
getch();
}