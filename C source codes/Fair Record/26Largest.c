/*Program to find the largest in an array of n numbers.*/

int largest(int*,unsigned int);
void main()
{
int A[10]; //A[] is the array of inputed numbers.
unsigned int n=0,lim;    //n is the loop control variable and lim is the limit.
clrscr();

printf("Enter the limit : ");
scanf("%d",&lim);

if(!lim)
{
printf("Sorry,there are no numbers to input as the limit is 0.");
goto end;
}

while(n<lim)
{
 printf("Enter the number%u : ",n+1);
 scanf("%d",&A[n]);
 n++;
}
printf("The largest number is : %d",largest(A,lim));

end:
printf("\nPress any key..... ");
getch();
}

int largest(int* A,unsigned int lim)   //function to return largest number
{
 int largest=-32768;    //largest is the largest number
 unsigned int i;        //i is the loop control variable

 for(i=0;i<lim;i++)
 if(A[i]>largest)
   largest=A[i];

 return largest;
}

/*OUTPUT
Enter the limit : 5
Enter the number1 : 12
Enter the number2 : 34
Enter the number3 : -6
Enter the number4 : 34
Enter the number5 : 21
The largest number is : 34
Press any key.....
*/