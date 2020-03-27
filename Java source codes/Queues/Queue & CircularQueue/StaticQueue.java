import java.util.Scanner;

public class StaticQueue
{
    int[] Arr = new int[30];
    int front=-1,rear=-1;

    public void enQueue(int data)
    {
        if(++rear<Arr.length)
        {
            if(front==-1)front=0;
            Arr[rear]=data;
        }
        else
        {
            System.out.println("Queue Overflow!");
            rear--;
        }
    }

    public void deQueue()
    {
        if(front==-1)
            System.out.println("Queue Underflow!");
        else 
        {
            System.out.println("deQueued "+Arr[front]);
            if(front==rear)
                front=rear=-1;
            else
                front++;
        }
    }

    public void createQueue()
    {
        System.out.print("Enter Queue size : ");
        int size = (new Scanner(System.in)).nextInt();
        Arr=new int[size];
        front=rear=-1;
    }

    public void displayQueue()
    {
        if(front==-1)
            System.out.println("Empty Queue!");
        else
        {
            System.out.println("The Queue is :");
            int i=front-1;
            while(i<rear)
            {
                i++;
                System.out.print(" "+Arr[i]);
            }
            System.out.println();
        }
    }
}