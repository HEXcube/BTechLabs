/*Program to compare two strings (Use dynamic memory allocation)*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <alloc.h>
void main()
{
char *xstring,*ystring;
int i;
clrscr();
//xstring and ystring are strings
//i is the loop controller
//len1 and len2 are the lengths of the strings

xstring = (char*) malloc( 50*sizeof(char) );
ystring = (char*) malloc( 50*sizeof(char) );
if(xstring==NULL||ystring==NULL)
{
 printf("Out of memory");
 goto end;
}

printf("Enter string1 : ");gets(xstring);
printf("Enter string2 : ");gets(ystring);

i=stricmp(xstring,ystring);
if(i>0)
printf("\'%s\' is larger than \'%s\'",xstring,ystring);
else if(i<0)
printf("\'%s\' is smaller than \'%s\'",xstring,ystring);
else
printf("Both strings are the same-\'%s\'",xstring);

end:
printf("\nPress any key....");
getch();
}

/*OUTPUT
Enter string1 : Shadow
Enter string2 : Image
'Shadow' is larger than 'Image'
Press any key....
*/