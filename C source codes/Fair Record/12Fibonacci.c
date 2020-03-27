/*Program to generate n numbers of fibanacci series*/

void main()
{
unsigned int n,i=1;
unsigned long a=0,b=1,c=0;
clrscr();
printf("Enter the limit : ");
scanf("%u",&n);
printf("\nThe fibonacci series for %u terms is :\n%lu\t%lu",n,a,b);

do
{
 c=a+b;
 a=b;
 b=c;
 i++;
 printf("\t%lu",c);
}while(i<n);

printf("\nPress any key..... ");
getch();
}

/*OUTPUT
Enter the limit : 6
                                                                                
The fibonacci series for 6 terms is :                                           
0       1       1       2       3       5       8
Press any key.....                                                              
*/                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
