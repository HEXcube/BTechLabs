import java.util.Scanner;

/**This class demonstrates polynomial representation
 * and addition using linked lists
 * 
 * @author Rohan Philip & Rafeek Muhammad
 */

public class Main
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        Polynomial[] P = new Polynomial[3];
        for(int i=0; i<2; i++)
        {
            System.out.println("\nEnter polynomial "+(i+1)+" -");
            P[i] = new Polynomial();
            P[i].acceptPolynomial();
        }

        System.out.println("\nThe polynomials are-");
        for(int i=0; i<2; i++)
        {
            System.out.print("Polynomial "+(i+1)+" : ");
            P[i].displayPolynomial();
            System.out.println();
        }

        P[2] = P[0].addPolynomial(P[1]);
        if(P[2]!=null)
        {
            System.out.println("\nSum of these polynomials-");
            P[2].displayPolynomial();
        }
    }
}