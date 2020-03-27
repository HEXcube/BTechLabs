import java.util.Scanner;

/**This class implements a Proper Stack statically :
 * It returns the popped value.
 * 
 * @author Rohan Philip & Rafeek Muhammad
 */

public class ProperStaticStack
{
    int[] Arr = new int[30];
    int top=-1;

    public ProperStaticStack(int size)
    {
        Arr=new int[size];
        top=-1;
    }

    public void push(int data)
    {
        if(++top<Arr.length)
        {
            Arr[top]=data;
        }
        else
        {
            System.out.println("Stack Overflow!");
            top--;
        }
    }

    public int pop()
    {
        return Arr[top--];
    }

    public int peek()
    {
        return Arr[top];
    }
    
    boolean empty()
    {
        if(top<0)
            return true;
        else
            return false;
    }
}