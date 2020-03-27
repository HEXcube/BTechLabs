import java.util.Scanner;

/**
 * Write a description of class Main here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

public class Main
{
    public static void main(String args[])
    {
        System.out.print("How many vertices? : ");
        Graph G = new Graph((new Scanner(System.in)).nextInt());
        G.acceptAdjMatrix();
        G.breadthFirstSearch();
        G.depthFirstSearch();
    }
}