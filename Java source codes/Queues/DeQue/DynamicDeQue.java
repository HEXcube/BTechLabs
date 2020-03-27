/**This class defines dynamic deque operations
 * This is an adapted version of SinglyLinkList with tail
 * 
 * @author Rohan Philip & Rafeek Muhammad
 */

public class DynamicDeQue
{
    Node head=null,tail=null;

    /**
     * Method enQueueRear
     * This method is basically insertLast()
     * @param data- the data to be added to queue
     */
    public void enQueueRear(int data)
    {
        Node temp = new Node(data);
        if(head!=null)
            tail.next = temp;
        else
            head=temp;
        tail = temp;
    }

    /**
     * Method deQueueFront
     * This method is basically deleteFirst()
     */
    public void deQueueFront()
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

    /**
     * Method enQueueFront
     * This method is basically insertFirst()
     * @param data- the data to be added to queue
     */
    public void enQueueFront(int data)
    {
        Node temp = new Node(data);
        temp.next = head;
        head = temp;
        if(tail==null) tail = head;
    }

    /**
     * Method deQueueRear
     * This method is basically deleteLast()
     */
    public void deQueueRear()
    {
        if(head==null)
            System.out.println("Queue Underflow!");
        else
        {
            System.out.println("deQueued "+tail.data);
            if(head.next==null)
                head=tail=null;
            else
            {
                Node nav;
                for(nav=head;nav.next!=tail;nav=nav.next);
                nav.next=null;
                tail=nav;
            }
        }
    }

    public void displayQueue()
    {
        if(head==null)
            System.out.println("Empty DeQue!");
        else
        {
            System.out.println("The DeQue is : ");
            for(Node nav = head;nav!=null;nav=nav.next)
                System.out.print(" "+nav.data);
            System.out.println();
        }
    }
}