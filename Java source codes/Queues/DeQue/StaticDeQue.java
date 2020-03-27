import java.util.Scanner;

public class StaticDeQue
{
    int[] Arr = new int[30];
    int front=-1,rear=-1;

    public void enQueueRear(int data)
    {

        if(front==(rear+1)%Arr.length)
            System.out.println("Queue Overflow!");
        else
        {
            rear=(++rear)%Arr.length;
            if(front==-1)front=rear;
            Arr[rear]=data;
        }
    }

    public void deQueueFront()
    {
        if(front==-1)
            System.out.println("Queue Underflow!");
        else
        {
            System.out.println("deQueued "+Arr[front]);
            if(front==rear)
                front=rear=-1;
            else
                front=(++front)%Arr.length;
        }
    }

    public void enQueueFront(int data)
    {

        if(front==(rear+1)%Arr.length)
            System.out.println("Queue Overflow!");
        else
        {            
            if(front>0)
                --front;
            else
            {
                front=Arr.length-1;
                if(rear==-1)rear=front;
            }
            Arr[front]=data;
        }
    }

    public void deQueueRear()
    {
        if(front==-1)
            System.out.println("Queue Underflow!");
        else 
        {
            System.out.println("deQueued "+Arr[rear]);
            if(front==rear)
                front=rear=-1;
            else
            {            
                if(rear>0)
                    --rear;
                else
                    rear=Arr.length-1;
            }
        }
    }

    public void createQueue()
    {
        System.out.print("Enter DeQue size : ");
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
            System.out.println("The Queue is : ");
            int i=front;
            do
            {
                System.out.print(" "+Arr[i]);
                i=(++i)%Arr.length;
            }
            while(i!=(rear+1)%Arr.length);
            System.out.println();
        }
    }
}