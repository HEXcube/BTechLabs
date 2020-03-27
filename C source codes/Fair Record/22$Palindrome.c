/*Program to check whether a string is palindrome or not.*/

void main()
{
char word[100],reverse[100],len=1,i;  //slength is string length
clrscr();

printf("Enter a word :\n");
gets(word);

for(len=0;word[len]!='\0';len++);   //to find out length of string

for(i=0;i<len;i++)
 reverse[i]=word[len-1-i];
reverse[len]='\0';

printf("\nThe word \'%s\' is ",word);
if(stricmp(reverse,word))
 printf("not a palindrome.");
else
 printf("a palindrome.");

printf("Press any key....");
getch();
}

/*OUTPUT
Enter a word :
Radar

The word 'Radar' is a palindrome.Press any key....
*/