import java.util.Scanner;

/**This class demonstrates sparse matrix operations
 * @author Rohan Philip & Rafeek Muhammad
 * 
 */

public class Main
{
    public static void main(String[] args)
    {
        SparseMatrix[] S = new SparseMatrix[3];
        for(int i=0; i<2; i++)
        {
            System.out.println("\nEnter the matrix "+(i+1)+" -");
            S[i] = new SparseMatrix();
            S[i].acceptMatrix();
            boolean is_it_sparse = S[i].sparseRep();
            if(is_it_sparse==false)
                return;
        }

        S[2] = S[0].addSparse(S[1]);
        if(S[2]!=null)
        {
            System.out.println("\nThe sum of these sparse matrices-");
            S[2].displaySparse();
        }
    }
}