/*Simulate string length, copy, concatenation, reverse, replace and substring.*/

void main()
{
char xstring[50],ystring[50],zstring[50];
unsigned int len,i;
clrscr();
//xstring[],ystring and zstring[] are strings
//i is the loop controller
//len is the length of the sting

printf("Enter the string:\n");
gets(xstring);

for(len=0;xstring[len]!='\0';len++);   //to find length of string
printf("\nI.Length\n  The length of \'%s\' is %u.\n",xstring,len);

for(i=0;i<len;i++)
  ystring[i]=xstring[i];              //to copy the string
ystring[len]='\0';
printf("\nII.String Copy\n"
       "   Original string : %s\n"
       "   Copied string   : %s\n",xstring,ystring);

printf("\nIII.Concatenation\n"
       "    Enter the string to concatenated with \'%s\' : ",xstring);
gets(zstring);
for(i=0;zstring[i]!='\0';i++)
  ystring[len+i]=zstring[i];          //to concatenate strings
ystring[len+i]='\0';
printf("    The string obtained by concatenating \'%s\'\n"
       "    with \'%s\' is \'%s\'\n",xstring,zstring,ystring);

for(i=0;i<len;i++)
 zstring[i]=xstring[len-1-i];
zstring[len]='\0';                //to reverse string
printf("\nIV.Reverse\n"
       "   The reverse of \'%s\' is \'%s\'\n",xstring,zstring);

ystring[len]='\0';
printf("\nV.Replacement\n"            //to replace a character
       "  Enter the position of replacement in \'%s\': ",xstring);
scanf("%u",&i);
--i;
if(i<len)
{
 printf("  Enter the character to replace with : ");
 ystring[i]=getche();
 printf("\n  \'%s\' after replacement with %c is \'%s\'\n",xstring,ystring[i],ystring);
}
else
printf("The specified position is out of array bounds\n");

printf("\nVI.Substring\n"
       "  Enter the size of substring : ");
scanf("%u",&i);
zstring[i]='\0';
if(--i<len)
{
 for(i;i!=0;i--)
  zstring[i]=xstring[i];              //to get substring
 zstring[0]=xstring[0];
 printf("  The substring of \'%s\' is \'%s\'\n",xstring,zstring);
}
else
printf("The specified size is out of array bounds\n");

printf("\nPress any key....");
getch();
}

/*OUTPUT
Enter the string:
Qwerty

I.Length
  The length of 'Qwerty' is 6.

II.String Copy
   Original string : Qwerty
   Copied string   : Qwerty

III.Concatenation
    Enter the string to concatenated with 'Qwerty' :  Keyboard
    The string obtained by concatenating 'Qwerty'
    with ' Keyboard' is 'Qwerty Keyboard'

IV.Reverse
   The reverse of 'Qwerty' is 'ytrewQ'

V.Replacement
  Enter the position of replacement in 'Qwerty': 6
  Enter the character to replace with :
  'Qwerty' after replacement with z is 'Qwertz'

VI.Substring
  Enter the size of substring : 5
  The substring of 'Qwerty' is 'Qwert'

Press any key....
*/