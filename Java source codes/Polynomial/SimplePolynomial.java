/**
 * SimplePolynomial overrides insertTerm() method with
 * an unsorted version.
 * It adds tail for easy insertion
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

public class SimplePolynomial extends Polynomial
{
    Node tail=null;

    /**
     * Method insertTerm
     * This method is basically insertLast/enQueue
     *
     * @param temp - term to be added
     */
    public void insertTerm(Node term)
    {
        if(head!=null)
        {
            tail.next=term;
            tail=term;
        }
        else
            head=tail=term; //createPolynomial
    }
}
