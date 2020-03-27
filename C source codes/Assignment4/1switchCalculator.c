/*Program to calculate the result of a given mathematical expession*/
void main()
{
int num1,num2;    //These are the operands
long result;      //This is the result
char op;          //This is the operation
clrscr();
printf("Enter an expression with two numbers and\nany of +,-,* or / operators:");
scanf("%d%c%d",&num1,&op,&num2);
switch(op)
{
case '+':result=num1+num2;break;
case '-':result=num1-num2;break;
case '/':printf("%d%c%d%c%f",num1,op,num2,'=',(float)num1/num2); //To output non integer values
	 getch();
	 exit(0);
case '*':result=num1*num2;break;
default: printf("Mathematical operation not possible.");exit(0);
}
printf("%d%c%d%c%d",num1,op,num2,'=',result);
getch();
}
 
