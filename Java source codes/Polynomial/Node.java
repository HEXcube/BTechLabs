/**
 * Node represents a single term in a polynomial.
 * for eg: 3x² would be coef=3 and expo=2
 * 
 * @author Rohan Philip
 * @version 27-11-2012
 */

public class Node
{
    int coef,expo;       //coef-coefficient,expo-exponent
    Node next;

    public Node(int coefficient,int exponent)
    {
        coef = coefficient;
        expo = exponent;
    }
}