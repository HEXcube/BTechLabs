/*Program to input a statement and count the alphabets, digits, and special symbols.*/

void main()
{
char sentence[100];
unsigned int i,alpha=0,digit=0,special=0;
clrscr();

printf("Enter a sentence : ");
gets(sentence);

for(i=0;sentence[i]!='\0';i++)
 if(sentence[i]>='A'&&sentence[i]<='Z'||sentence[i]>='a'&&sentence[i]<='z')
   alpha++;
 else
 {
  if(sentence[i]>='0'&&sentence[i]<='9')
  digit++;
  else
  special++;
 }
printf("The sentence entered contains:\n"
       "Alphabets       -  %u\n"
       "Digits          -  %u\n"
       "Special symbols -  %u\n"
       ,alpha,digit,special);

printf("Press any key....");
getch();
}

/*OUTPUT
Enter a sentence : Hello! 2day is a good day.
The sentence entered contains:
Alphabets       -  18
Digits          -  1
Special symbols -  7
Press any key....
*/