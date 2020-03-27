import java.util.Scanner;

public class CircularLinkList
{
    Node tail=null;
    Scanner cin = new Scanner(System.in);
    int count = 0;

    /**
     * Method createList
     * resets the linked list with 1 new node
     *
     * @param data - content of new node
     */
    protected void createList(int data)
    {
        tail = new Node(data);
        tail.next = tail;
        count = 1;
    }

    /**
     * Method insertAt
     * inserts a node at the given reference
     *
     * @param ref - reference of the node to which new node is to be linked
     */
    protected void insertAfter(Node ref,int data)
    {
        Node temp = new Node(data);
        temp.next = ref.next;
        ref.next = temp;
        count++;
    }

    public void insertFront(int data)
    {
        if(tail!=null)
            insertAfter(tail,data);
        else
            createList(data);
    }

    public void insertRear(int data)
    {
        if(tail!=null)
        {
            insertAfter(tail,data);
            tail=tail.next;
        }
        else
            createList(data);
    }

    public void insertPos()
    {
        System.out.print("Enter position and data : ");
        insertPos(cin.nextInt(),cin.nextInt());
    }

    public void insertPos(int pos,int data)
    {
        if(pos==1)
            insertFront(data);
        else if(tail==null)
            System.out.println("Invalid Position!");
        else
        {
            int i,n;
            Node nav;
            //navigate to pos-1 th node
            for(i=1,n=pos-1,nav=tail.next;(i<n)&&(nav!=tail);i++,nav=nav.next);
            if(i==pos-1)
            {
                insertAfter(nav,data);
                if(nav==tail)
                    tail=tail.next;
            }
            else
                System.out.println("Invalid Position!");
        }
    }

    public void displayList()
    {
        if(tail==null)
            System.out.println("Empty List!");
        else
        {
            System.out.println("Linked List is :");
            Node nav = tail.next;
            do
            {
                System.out.print(" "+nav.data);
                nav=nav.next;
            } while(nav!=tail.next);
            System.out.println();
        }
    }

    /**
     * Method deleteBasic
     * handles deletion from 1 node and empty lists
     */
    protected void deleteBasic()
    {
        if(tail==null)
            System.out.println("Empty List!");
        else    //If only 1 node in list
        {
            tail=null;
            count=0;
        }
    }

    public void deleteFront()
    {
        if(count>1)
        {
            tail.next=tail.next.next;
            count--;
        }
        else
            deleteBasic();
    }

    public void deleteRear()
    {

        if(count>1)     //If more than 1 node in list
        {
            Node nav;
            //Navigate to second last node
            for(nav=tail.next; nav.next!=tail; nav=nav.next);
            nav.next=tail.next;
            tail=nav;
            count--;
        }
        else
            deleteBasic();
    }

    public void deletePos()
    {
        System.out.print("Enter position : ");
        int pos = cin.nextInt();
        if((pos>count)||(pos<1))
        {
            System.out.println("Invalid Position!");
            return;
        }
        else
        {
            if(pos==1)
                deleteFront();
            else if(pos==count)
                deleteRear();
            else
            {
                int i,n;
                Node nav = tail.next;
                for(i=1,n=pos-1,nav=tail.next;i<n;i++,nav=nav.next);  //navigate to pos-1 th node
                nav.next=nav.next.next;
                count--;
            }
        }
    }

}