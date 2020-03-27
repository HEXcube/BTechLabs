/**This class defines dynamic ascending priority queue operations.
 * LVFO - Lower Value has Higher Priority
 * This is an adapted version of Stack with sorted enQueue method.
 * 
 * @author Rohan Philip & Rafeek Muhammad
 */

public class DynamicAscPriorityQueue implements PriorityQueue
{
    PrioNode head;

    /**
     * Method enQueue
     * This method is performs ascending sorted insertion
     *
     * @param temp- the node to be enQueued
     */
    public void enQueue(PrioNode temp)
    {
        if((head==null)||(temp.priority<head.priority))
        {   //insertFront
            temp.next = head;
            head = temp;
        }
        else
        {
            PrioNode nav;
            for(nav = head; (nav.next!=null)&&(nav.next.priority<=temp.priority); nav=nav.next);
            temp.next=nav.next;
            nav.next=temp;
        }
    }

    /**
     * Method deQueue
     * This method is basically deleteFirst()
     */
    public void deQueue()
    {
        if(head!=null)
        {
            System.out.println("deQueued "+head.data);
            head=head.next;
        }
        else
            System.out.println("Queue Underflow!");
    }

    public void displayQueue()
    {
        if(head==null)
            System.out.println("Empty Queue!");
        else
        {
            System.out.println("The Queue is : ");
            for(PrioNode nav = head;nav!=null;nav=nav.next)
                System.out.print(" "+nav.data);
            System.out.println();
        }
    }

    /**
     * Method createQueue
     * This method is kept here only for the sake of implementing
     * all methods in PriorityQueue interface.
     */
    public void createQueue()
    {
        System.out.println("Stub Method!");
    }

    /**
     * Method enQueue
     * This method is kept here only for the sake of implementing
     * all methods in PriorityQueue interface.
     */
    public void enQueue(PriNode temp)
    {
        System.out.println("Stub Method!");
    }
}