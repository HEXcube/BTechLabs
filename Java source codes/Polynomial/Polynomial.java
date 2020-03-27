import java.util.Scanner;

/**
 * Polynomial class is influenced by Dynamic Descending Priority Queue
 * Nodes are stored in descending order of exponents.
 * 
 * @author Rohan Philip 
 * @version 29-3-2012
 */

public class Polynomial
{
    Node head=null;
    Scanner cin = new Scanner(System.in);

    /**
     * Method insertTerm
     * insertTerm() is descending sorted enQueue with 
     * expo<-priority && coef<-data
     * 
     * @param temp- the node to be enQueued
     */
    public void insertTerm(Node temp)
    {
        if((head==null)||(temp.expo>head.expo))
        {   //insertFront
            temp.next = head;
            head = temp;
        }
        else
        {
            Node nav;
            for(nav=head; (nav.next!=null)&&(nav.next.expo>=temp.expo); nav=nav.next);
            temp.next=nav.next;
            nav.next=temp;
        }
    }

    public void acceptPolynomial()
    {
        System.out.print("How many terms? : ");
        int term_num = cin.nextInt();
        System.out.println("Enter terms : coefficient then exponent -");
        for(int i=0;i<term_num;i++)
            insertTerm(new Node(cin.nextInt(),cin.nextInt()));
    }

    public void displayPolynomial()
    {
        if(head==null)
            System.out.println("Empty Polynomial!");
        else
        {
            System.out.print(" "+head.coef+"x^"+head.expo);
            for(Node nav = head.next;nav!=null;nav=nav.next)
                System.out.print("+"+nav.coef+"x^"+nav.expo);
        }
    }

    public Polynomial addPolynomial(Polynomial X)
    {
        if((head==null)||(X.head==null))
        {
            System.out.print("Empty Polynomial!");
            return null;
        }

        Polynomial Temp = new Polynomial();
        Node nav1=head,nav2=X.head;
        while((nav1!=null)&&(nav2!=null))
        {
            if(nav1.expo==nav2.expo)
            {
                Temp.insertTerm(new Node(nav1.coef+nav2.coef,nav1.expo));
                nav1=nav1.next;
                nav2=nav2.next;
            }
            else if(nav1.expo>nav2.expo)
            {
                Temp.insertTerm(new Node(nav1.coef,nav1.expo));
                nav1=nav1.next;
            }
            else
            {
                Temp.insertTerm(new Node(nav2.coef,nav2.expo));
                nav2=nav2.next;
            }
        }

        while(nav1!=null)
        {
            Temp.insertTerm(new Node(nav1.coef,nav1.expo));
            nav1=nav1.next;
        }

        while(nav2!=null)
        {
            Temp.insertTerm(new Node(nav2.coef,nav2.expo));
            nav2=nav2.next;
        }

        return Temp;
    }

}