import java.util.Scanner;

/**This class demonstrates deque operations
 * @author Rohan Philip & Rafeek Muhammad
 * 
 */

public class Main
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        //X could be declared as a StaticDeQueue or DynamicDeQue object
        StaticDeQue X = new StaticDeQue();
        X.createQueue();    //comment out createQueue for Dynamic DeQue
        System.out.print("How many elements to insert? : ");
        int num = cin.nextInt();
        System.out.println("Enter elements -");
        for(int i=0;i<num;i++)
            X.enQueueRear(cin.nextInt());
        X.displayQueue();
        int option;
        do
        {
            System.out.print("\nOperations-\n"+
                "\t1.enQueue to Rear\n"+
                "\t2.enQueue to Front\n"+
                "\t3.deQueue from Rear\n"+
                "\t4.deQueue from Front\n"+
                "\t5.Display DeQue\n"+
                "\tAny other key to Exit\n"+
                "Enter option : ");
            option = cin.nextInt();
            switch(option)
            {
                case 1 : System.out.print("Enter element : ");
                X.enQueueRear(cin.nextInt());
                break;
                case 2 : System.out.print("Enter element : ");
                X.enQueueFront(cin.nextInt());
                break;
                case 3 : X.deQueueRear();break;
                case 4 : X.deQueueFront();break;
                case 5 : X.displayQueue();break;
                default : option=0;
            }
        }while(option!=0);
    }
}