/*Count the vowels, words and sentences in a paragraph.*/

void main()
{
char para[200];
unsigned int i,vowels=0,space_comma=0,dots=0;
clrscr();

printf("Enter a paragraph of text :\n");
gets(para);

for(i=0;para[i]!='\0';i++)
switch(para[i])
{
 case 'a':
 case 'A':
 case 'e':
 case 'E':
 case 'i':
 case 'I':
 case 'o':
 case 'O':
 case 'u':
 case 'U':vowels++;
          break;
 case ',':
 case ' ':space_comma++;
          break;
 case '.':dots++;
}


printf("\nThe paragraph entered contains:\n"
       "Vowels          -  %u\n"
       "Words           -  %u\n"
       "Sentences       -  %u\n"
       ,vowels,space_comma+dots,dots);

printf("Press any key....");
getch();
}

/*OUTPUT
Enter a paragraph of text :
Hello,everyone.This program is created in C.

The paragraph entered contains:
Vowels          -  14
Words           -  8
Sentences       -  2
Press any key....
*/
