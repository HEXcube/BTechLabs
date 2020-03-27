/**
 * StaticDescPriorityQueue uses Descending Priority Approach:
 * HVFO - Higher Value has Higher Priority
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

public class StaticDescPriorityQueue extends StaticAscPriorityQueue
{
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
            for(i=top-1;(i>=0)&&(temp.priority<=Arr[i].priority);i--)
                Arr[i+1]=Arr[i];
            Arr[i+1]=temp;
        }
        else
        {
            System.out.println("Queue Overflow!");
            top--;
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