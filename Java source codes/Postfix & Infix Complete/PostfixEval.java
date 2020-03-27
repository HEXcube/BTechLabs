import java.util.Scanner;

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
        ProperStaticStack opstk = new ProperStaticStack(inFix.length());

        for(int i=0;i<inFix.length();i++)
        {
            symb = inFix.charAt(i);
            if(Character.isDigit(symb))
                postFix+=symb;
            else if(symb=='(')
                opstk.push( (char)symb );
            else if(symb==')')
                while(!opstk.empty()&&( (popout=((char)opstk.pop())) !='(' ) )
                    postFix+=popout;
            else    //When symb is an operator
            {
                while(!opstk.empty()&&( priority(symb) < priority( popout=((char)opstk.peek()) ) ))
                {
                    postFix+=popout;
                    opstk.pop();
                }
                opstk.push( new Character(symb) );
            }
        }
        while(!opstk.empty()) //to popout remaining operators from stack
            postFix+=((char)opstk.pop());
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

    public static int evaluate(String postFix)
    {
        ProperStaticStack opndstk = new ProperStaticStack(postFix.length());
        char symb;
        int opnd1,opnd2,value=0;
        for(int i=0;i<postFix.length();i++)
        {
            symb=postFix.charAt(i);
            if(Character.isDigit(symb))
                opndstk.push( (int)(symb-'0') );
            else
            {
                opnd2 = opndstk.pop();
                opnd1 = opndstk.pop();
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
                opndstk.push(value);
            }
        }
        return opndstk.pop();
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