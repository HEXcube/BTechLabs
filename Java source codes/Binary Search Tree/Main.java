import java.util.Scanner;

/**This class demonstrates Binary Search Tree operations
 * @author Rohan Philip & Rafeek Muhammad
 * 
 */

public class Main
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        BinSearchTree X = new BinSearchTree();
        System.out.print("How many elements to insert? : ");
        int num = cin.nextInt();
        System.out.println("Enter nodes -");
        for(int i=0;i<num;i++)
            X.insertNode(cin.nextInt());
        int option;
        do
        {
            System.out.print("\nOperations-\n"+
                "\t1.Insertion\n"+
                "\t2.Deletion\n"+
                "\tTraversals :\n"+
                "\t3.preorder\n"+
                "\t4.inorder\n"+
                "\t5.postorder\n"+
                "\tAny other key to Exit\n"+
                "Enter option : ");
            option = cin.nextInt();
            switch(option)
            {
                case 1 : System.out.print("Enter node : ");
                X.insertNode(cin.nextInt());
                break;
                case 2 : System.out.print("Enter key to delete : ");
                X.deleteNode(cin.nextInt());
                break;
                case 3 : X.preOrder(X.root);
                break;
                case 4 : X.inOrder(X.root);
                break;
                case 5 : X.postOrder(X.root);
                break;
                default : option=0;
            }
        }while(option!=0);
    }
}