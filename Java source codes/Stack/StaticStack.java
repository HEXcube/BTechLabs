import java.util.Scanner;

public class StaticStack
{
    int[] Arr = new int[30];
    int top=-1;

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

    public void pop()
    {
        if(top<0)
            System.out.println("Stack Underflow!");
        else
            System.out.println("Popped "+Arr[top--]);
    }

    public void createStack()
    {
        System.out.print("Enter Stack size : ");
        int size = (new Scanner(System.in)).nextInt();
        Arr=new int[size];
        top=-1;
    }

    public void displayStack()
    {
        if(top==-1)
            System.out.println("Empty Stack!");
        else
        {
            System.out.println("The Stack is :");
            int i=top+1;
            while(i>0)
            {
                i--;
                System.out.print(" "+Arr[i]);
            }
            System.out.println();
        }
    }
}