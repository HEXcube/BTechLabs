import java.util.Scanner;

public class DoublyLinkList
{
    DiNode head=null,tail=null;
    Scanner cin = new Scanner(System.in);
    int count = 0;

    public void insertFront(int data)
    {
        DiNode temp = new DiNode(data);
        temp.next = head;
        if(head!=null)
            (temp.next).prev = temp;
        else
            tail = temp;
        head = temp;
        count++;

    }

    public void insertRear(int data)
    {
        if(head!=null)
        {
            DiNode temp = new DiNode(data);
            tail.next= temp;
            temp.prev= tail;
            tail= temp;
            count++;
        }
        else
            insertFront(data);
    }

    public void insertPos()
    {
        System.out.print("Enter position : ");
        int pos = cin.nextInt();
        if((pos>count+1)||(pos<1))
        {
            System.out.println("Invalid Position!");
            return;
        }
        else
        {
            System.out.print("Enter node : ");
            int data = cin.nextInt();
            if(pos==1)
                insertFront(data);
            else if(pos==count+1)
                insertRear(data);
            else
            {
                DiNode nav = head;
                for(int i=1;i<(pos-1);nav=nav.next,i++);  //Navigate to pos-1th node
                DiNode temp = new DiNode(data);
                temp.next=nav.next;
                temp.prev=nav;
                nav.next= temp;
                (temp.next).prev=temp;     
                count++;
            }
        }
    }

    public void displayFrontToRear()
    {
        if(head!=null)
        {
            System.out.println("Linked List is :");
            for(DiNode nav = head;nav!=null;nav=nav.next)
                System.out.print(" "+nav.data);
            System.out.println();
        }
        else
            System.out.println("Empty List!");
    }

    public void displayRearToFront()
    {
        if(tail!=null)
        {
            System.out.println("Linked List is :");
            for(DiNode nav = tail;nav!=null;nav=nav.prev)
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
            if(head==null)
                tail=null;
            else
                head.prev=null;
            count--;
        }
        else
            System.out.println("Empty List!");
    }

    /**
     * Method deleteLast
     * As Doubly Linked List is symmetric about both ends,
     * replacing head with tail in deleteFront will produce deleteRear
     */
    public void deleteRear()
    {
        if(head!=null)
        {
            tail=tail.prev;
            if(tail==null)
                head=null;
            else
                tail.next=null;
            count--;
        }
        else
            System.out.println("Empty List!");
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
        else  if(pos==1)
            deleteFront();
        else if(pos==count)
            deleteRear();
        else
        {
            DiNode nav = head;
            for(int i=1;i<(pos-1);nav=nav.next,i++);
            nav.next = (nav.next).next;
            (nav.next).prev = nav;
            count--;
        }
    }

}