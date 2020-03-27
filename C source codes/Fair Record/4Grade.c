/*Program to read the mark of a student (out of 100) and print the grade.
  if mark>=90  grade A,
  if   80<=mark <90 grade B,
  if  70<= mark < 80 grade C
  if 60<= mark <  70 grade D,
  if 50<= mark < 60 grade E,
  else “failed”
*/

void main()
{
unsigned int mark;
clrscr();

printf("Enter the marks : ");
scanf("%u",&mark);

printf("\nThe student has ");
if(mark>89)           //same as mark>=90
 printf("Grade A");
else if(mark>79)      //same as mark>=80
 printf("Grade B");
else if(mark>69)      //same as mark>=70
 printf("Grade C");
else if(mark>59)      //same as mark>=60
 printf("Grade D");
else if(mark>49)      //same as mark>=50
  printf("Grade E");
else
  printf("failed");

printf("\n\nPress any key...");
getch();
}

/*OUTPUT
Enter the marks : 94

The student has Grade A

Press any key...
*/