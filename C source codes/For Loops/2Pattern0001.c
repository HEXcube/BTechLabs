#include <stdio.h>
#include <stdlib.h>

/*Program to display the pattern
   00 01 02 ............97 98 99*/
int main()
{
unsigned int i,j;    //i and j are the loop controllers
system("reset");
for(i=0;i<10;i++)
{
 for(j=0;j<10;j++)
 {
  printf("%u%u ",i,j);
 }
printf("\n");
}
printf("\nPress Enter..... ");
getchar();
return 0;
}
