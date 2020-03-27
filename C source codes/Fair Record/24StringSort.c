/*Program to sort n strings.*/

#include<stdio.h>
#define M 50
#define N 100

void main()
{
char strings[M][N],tmp[N];
unsigned int num,i,j,priority;
clrscr();
//strings[][] is an array of strings
//num is the number of strings

printf("How many strings do you want to enter? : ");
scanf("%u",&num);

flushall();
printf("Enter the strings:\n");
for(i=0;i<num;i++)
{
 printf("String %u : ",i+1);
 gets(strings[i]);
}

for(i=0;i<num-1;i++)
{
 priority=i;
 for(j=i+1;j<num;j++)
  if(strcmp(strings[i],strings[j])>0)
       priority=j;

 if(priority!=i)
 {
  strcpy(tmp,strings[i]);
  strcpy(strings[i],strings[priority]);
  strcpy(strings[priority],tmp);
 }
}

printf("\nThe sorted string array is :\n");
for(i=0;i<num;i++)
{
 printf("String %u : ",i);
 puts(strings[i]);
}

printf("Press any key....");
getch();
}

/*OUTPUT
How many strings do you want to enter? : 3
Enter the strings:
String 0 : Haloween
String 1 : All Saints Day
String 2 : Friday the 13

The sorted string array is :
String 0 : Friday the 13
String 1 : All Saints Day
String 2 : Haloween
Press any key....
*/