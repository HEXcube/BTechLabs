import java.util.Scanner;
import java.util.Stack;

class PostfixEval
{
    /**
     * Method toPostfix toPostfix assumes operators to be right associative
     * 
     * @param inFix
     *            string
     * @return the postfix string
     */
    public static String toPostfix(String inFix)
    {
        char symb,popout;
        String postFix=new String();
        Stack opstk = new Stack();

        for(int i=0;i<inFix.length();i++)
        {
            symb = inFix.charAt(i);
            if(Character.isDigit(symb))
                postFix+=symb;
            else if(symb=='(')
                opstk.push( new Character(symb) );
            else if(symb==')')
                while(!opstk.empty()&&( (popout=((Character)opstk.pop()).charValue()) !='(' ) )
                    postFix+=popout;
            else    //When symb is an operator
            {
                while(!opstk.empty()&&( priority(symb) < priority( popout=((Character)opstk.peek()) ) ))
                {
                    postFix+=popout;
                    opstk.pop();
                }
                opstk.push( new Character(symb) );
            }
        }
        while(!opstk.empty()) //to popout remaining operators from stack
            postFix+=((Character)opstk.pop()).charValue();
        return postFix;
    }

    protected static byte priority(char op)
    {
        switch(op)
        {
            case '+':
            case '-':return 1;
            case '*':
            case '/':return 2;
            default :return 0;
        }
    }

    public static float evaluate(String postFix)
    {
        Stack opndstk = new Stack();
        char symb;
        float opnd1,opnd2,value=0;
        for(int i=0;i<postFix.length();i++)
        {
            symb=postFix.charAt(i);
            if(Character.isDigit(symb))
                opndstk.push( new Float(symb-'0') );
            else
            {
                opnd2=( (Float)opndstk.pop() ).floatValue();
                opnd1=( (Float)opndstk.pop() ).floatValue();
                switch(symb)
                {
                    case '+':value=opnd1+opnd2;
                    break;
                    case '-':value=opnd1-opnd2;
                    break;
                    case '*':value=opnd1*opnd2;
                    break;
                    case '/':value=opnd1/opnd2;
                }
                opndstk.push( new Float(value) );
            }
        }
        return ( (Float)opndstk.pop() ).floatValue();
    }

    public static void main(String[] args)
    {
        String inFix,postFix;
        System.out.println("Enter an infix expression : ");
        inFix = ( new Scanner(System.in) ).nextLine();
        postFix=toPostfix(inFix);
        System.out.println("Postfix form : "+postFix);
        System.out.print("Value is : "+evaluate(postFix));
    }
}