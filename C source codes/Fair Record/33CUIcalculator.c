/*Program to simulate a simple calculator using command line
arguments*/

int main(unsigned int count,char** arg)
{
    int num1,num2;    //These are the operands
    long result;      //This is the result
    char op,i;        //This is the operator
    clrscr();

    if(count<5)
    {
        i=1;
        num1=atoi(arg[1]);
        num2=atoi(arg[3]);
        op=arg[2][0];

        switch(op)
        {
        case '+':result=num1+num2;break;
        case '-':result=num1-num2;break;
        case '/':printf("\n%d%c%d%c%f",num1,op,num2,'=',(float)num1/num2); //To output non integer values
                 i=2;
                 break;
        case '*':result=num1*num2;break;
        default: i=0;
        }
    }
    else i=0;

    if(i==1)
    printf("\n%d%c%d%c%d",num1,op,num2,'=',result);
    else if(!i)
    printf("Mathematical operation not possible.");

    getch();
    return 0;
}