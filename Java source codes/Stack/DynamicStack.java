/**This class defines dynamic stack operations
 * This is basically SinglyLinkList with insertFirst() as push()
 * and deleteFirst() as pop()
 * 
 * @author Rohan Philip & Rafeek Muhammad
 */

public class DynamicStack
{
    Node head = null;

    /**
     * Method push
     * This method is basically insertFirst()
     * @param data- the data to be pushed to stack
     */
    public void push(int data)
    {
        Node temp = new Node(data);
        temp.next = head;
        head = temp;
    }

    /**
     * Method pop
     * This method is basically deleteFirst()
     */
    public void pop()
    {
        if(head!=null)
        {
            System.out.println("Popped "+head.data);
            head=head.next;
        }
        else
            System.out.println("Stack Underflow!");
    }

    public void displayStack()
    {
        if(head==null)
            System.out.println("Empty Stack!");
        else
        {
            System.out.println("The Stack is : ");
            for(Node nav = head;nav!=null;nav=nav.next)
                System.out.print(" "+nav.data);
            System.out.println();
        }
    }
}