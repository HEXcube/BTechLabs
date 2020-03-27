/*Program to calculate the result of a given mathematical expession*/
void main()
{
int num1,num2,choice;    //These are the operands
long result;      //This is the result
char op;   //op is the operator
do
{
clrscr();
printf("Enter an expression with two numbers and\nany of +,-,* or / operators:");
scanf("%d%c%d",&num1,&op,&num2);
switch(op)
{
case '+':result=num1+num2;break;
case '-':result=num1-num2;break;
case '/':printf("%d%c%d%c%f",num1,op,num2,'=',(float)num1/num2); //To output non integer values
	 goto end;
case '*':result=num1*num2;break;
default: printf("Mathematical operation not possible.");goto end;
}
printf("%d%c%d%c%d",num1,op,num2,'=',result);
end:
printf("\nPress 0 to exit and any other key to continue : ");
scanf("%d",&choice);
}while(choice);
}
 
