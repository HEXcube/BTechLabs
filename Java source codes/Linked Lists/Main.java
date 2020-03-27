import java.util.Scanner;

/**This class demonstrates circular/singly/doubly linked list operations
 * @author Rohan Philip & Rafeek Muhammad
 * 
 */

public class Main
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        //X could be declared as a SinglyLinkList,CircularLinkList or DoublyLinkList
        SinglyLinkList X = new SinglyLinkList();
        System.out.print("How many elements to insert? : ");
        int num = cin.nextInt();
        System.out.println("Enter nodes -");
        for(int i=0;i<num;i++)
            X.insertRear(cin.nextInt());
        X.displayList();    //For Singly and Circular LinkList
        //X.displayFrontToRear();     //For DoublyLinkList only
        int option;
        do
        {
            System.out.print("\nOperations-\n"+
                "\tInsert to\n"+
                "\t1.front\n"+
                "\t2.rear\n"+
                "\t3.given position\n"+
                "\tDelete from\n"+
                "\t4.front\n"+
                "\t5.rear\n"+
                "\t6.given position\n"+
                "\t7.Display Linked List\n"+    //Comment this for DoublyLinkList
                /*Uncomment case 7 and 8 for Doubly Link List
                "\tDisplay Linked List from\n"+
                "\t7.Front to Rear\n"+
                "\t8.Rear to Front\n"+*/
                "\tAny other key to Exit\n"+
                "Enter option : ");
            option = cin.nextInt();
            switch(option)
            {
                case 1 : System.out.print("Enter node : ");
                X.insertFront(cin.nextInt());
                break;
                case 2 : System.out.print("Enter node : ");
                X.insertRear(cin.nextInt());
                break;
                case 3 : X.insertPos();
                break;
                case 4 : X.deleteFront();
                break;
                case 5 : X.deleteRear();
                break;
                case 6 : X.deletePos();
                break;
                /*Comment this for DoublyLinkList*/
                case 7 : X.displayList();         
                break;
                /*Uncomment case 7 and 8 for DoublyLinkList only
                case 7 : X.displayFrontToRear();
                break;
                case 8 : X.displayRearToFront();
                break;*/
                default : option=0;
            }
        }while(option!=0);
    }
}