/**This class defines dynamic descending priority queue operations.
 * HVFO - Higher Value has Higher Priority
 * This is an adapted version of Stack with sorted enQueue method.
 * 
 * @author Rohan Philip & Rafeek Muhammad
 */

public class DynamicDescPriorityQueue extends DynamicAscPriorityQueue
{
    /**
     * Method enQueue
     * This method is performs descending sorted insertion
     *
     * @param temp- the node to be enQueued
     */
    public void enQueue(PrioNode temp)
    {
        if((head==null)||(temp.priority>head.priority))
        {   //insertFront
            temp.next = head;
            head = temp;
        }
        else
        {
            PrioNode nav;
            for(nav = head; (nav.next!=null)&&(nav.next.priority>=temp.priority); nav=nav.next);
            temp.next=nav.next;
            nav.next=temp;
        }
    }
}
