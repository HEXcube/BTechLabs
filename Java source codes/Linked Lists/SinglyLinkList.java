import java.util.Scanner;

public class SinglyLinkList
{
    Node head=null;
    Scanner cin = new Scanner(System.in);
    int count = 0;

    public void insertFront(int data)
    {
        Node temp = new Node(data);
        temp.next = head;
        head = temp;
        count++;
    }

    public void insertRear(int data)
    {
        if(head==null)
            insertFront(data);
        else
        {
            Node nav;
            for( nav=head; nav.next!=null; nav=nav.next );
            Node temp = new Node(data);
            nav.next= temp;
            count++;
        }
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
        else
        {
            int i,n;
            Node nav;
            //navigate to pos-1 th node
            for(i=1,n=pos-1,nav=head;(i<n)&&(nav!=null);i++,nav=nav.next);
            if( (i==pos-1)&&(nav!=null) )
            {
                Node temp = new Node(data);
                temp.next=nav.next;
                nav.next= temp;
            }
            else
                System.out.println("Invalid Position");
        }
    }

    public void displayList()
    {

        if(head!=null)
        {
            System.out.println("Linked List is :");
            for(Node nav = head;nav!=null;nav=nav.next)
                System.out.print(" "+nav.data);
            System.out.println();
        }
        else
            System.out.println("Empty List!");
    }

    public void deleteFront()
    {
        if(head!=null)
        {
            head=head.next;
            count--;
        }
        else
            System.out.println("Empty List!");
    }

    public void deleteRear()
    {
        if(head==null)
            System.out.println("Empty List!");
        else if(head.next==null)    
        {
            head=null;
            count = 0;
        }
        else
        {
            Node nav;
            for(nav = head; (nav.next).next!=null; nav=nav.next);
            nav.next=null;
            count--;
        }
    }

    public void deletePos()
    {
        System.out.print("Enter position : ");
        deletePos(cin.nextInt());
    }

    public void deletePos(int pos)
    {
        if(head==null)
            System.out.println("Empty List!");
        else if(pos==1)
            deleteFront();
        else
        {
            int i;
            Node nav;
            for(i=1,nav=head;(i<(pos-1))&&(nav.next!=null);nav=nav.next,i++);
            if( (i==pos-1)&&(nav.next!=null) )
                nav.next = (nav.next).next;
            else
                System.out.println("Invalid Position");
        }
    }

    /**
     * sortList() method
     * Selection sort for singly linked lists 
     *
     */
    public void sortList()
    {
        Node min,nav1,nav2;
        if(head==null)
            System.out.println("Empty linked list!\nNothing to sort");
        else
            for(nav1=head;nav1.next!=null;nav1=nav1.next)
            {
                min=nav1;
                for(nav2=nav1.next;nav2!=null;nav2=nav2.next)
                    if(nav2.data<min.data)
                        min=nav2;

                if(min!=nav1)
                    swap(min,nav1);
        }
    }

    public void swap(Node A,Node B)
    {
        int temp=A.data;
        A.data=B.data;
        B.data=temp;
    }

}
