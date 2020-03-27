/**This class implements a Proper Stack dynamically :
 * It returns the popped value.
 * 
 * @author Rohan Philip & Rafeek Muhammad
 */

public class ProperDynamicStack
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
    public int pop()
    {
        Node temp = head;
        head = head.next;
        return temp.data;
    }

    public int peek()
    {
        return head.data;
    }
    
    boolean empty()
    {
        if(head==null)
            return true;
        else
            return false;
    }
}