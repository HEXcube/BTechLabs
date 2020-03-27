/*Program to check whether the inputed alphabet is a capital letter or not*/
void main()
{
char ch;
clrscr();
printf("Enter an alphabet : ");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
printf("The given alphabet is a capital letter.");
else
{
 if(ch>='a'&&ch<='z')
 printf("The given alphabet is a small letter.");
 else
 printf("The given character is not an alphabet.");
}
getch();
}
/*OUTPUT
Enter an alphabet : b
The given alphabet is a small letter.
*/