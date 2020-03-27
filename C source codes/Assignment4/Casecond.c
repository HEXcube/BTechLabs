/*Program to accept a alphabet and check whether it is capital or not
using conditional operator*/

void main()
{
char c;            //c is the alphabet to be checked
clrscr();
printf("Enter an alphabet : ");
scanf("%c",&c);
(c>='A'&& c<='Z') ? printf("\nThe inputed alphabet is capital.") :
(c>='a'&& c<='z') ? printf("\nThe inputed alphabet is lowercase.") :
		    printf("\nThe inputed alphabet is not valid.");
getch();
}