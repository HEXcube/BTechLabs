/**This class defines dynamic queue operations
 * This is an adapted version of SinglyLinkList with tail
 * 
 * @author Rohan Philip & Rafeek Muhammad
 */

public class DynamicQueue
{
    Node head=null,tail=null;

    /**
     * Method enQueue
     * This method is basically insertLast()
     * @param data- the data to be added to queue
     */
    public void enQueue(int data)
    {
        Node temp = new Node(data);
        if(head!=null)
            tail.next = temp;
        else
            head=temp;
        tail = temp;
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
            if(head==null)
                tail=null;
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
            for(Node nav = head;nav!=null;nav=nav.next)
                System.out.print(" "+nav.data);
            System.out.println();
        }
    }
}