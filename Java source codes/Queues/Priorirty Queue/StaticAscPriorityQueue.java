/**
 * StaticAscPriorityQueue uses Ascending Priority Approach:
 * LVFO - Lower Value has Higher Priority
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

import java.util.Scanner;

public class StaticAscPriorityQueue implements PriorityQueue
{
    PriNode[] Arr = new PriNode[30];
    int top=-1;

    /**
     * enQueue - adds a node to the Priority queue in sorted order
     *
     * @param  temp - node to be inserted
     */
    public void enQueue(PriNode temp)
    {
        if(++top<Arr.length)
        {
            int i;
            for(i=top-1;(i>=0)&&(temp.priority>=Arr[i].priority);i--)
                Arr[i+1]=Arr[i];
            Arr[i+1]=temp;
        }
        else
        {
            System.out.println("Queue Overflow!");
            top--;
        }
    }

    public void deQueue()
    {
        if(top<0)
            System.out.println("Queue Underflow!");
        else
        {
            System.out.println("deQueued "+Arr[top].data);
            top--;
        }
    }

    public void createQueue()
    {
        System.out.print("Enter Queue size : ");
        int size = (new Scanner(System.in)).nextInt();
        Arr=new PriNode[size];
        top=-1;
    }

    public void displayQueue()
    {
        if(top==-1)
            System.out.println("Empty Queue!");
        else
        {
            System.out.println("The Queue is :");
            int i=top+1;
            while(i>0)
            {
                i--;
                System.out.print(" "+Arr[i].data);
            }
            System.out.println();
        }
    }

    /**
     * Method enQueue
     * This method is kept here only for the sake of implementing
     * all methods in PriorityQueue interface.
     */
    public void enQueue(PrioNode temp)
    {
        System.out.println("Stub Method!");
    }
}