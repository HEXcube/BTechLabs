import java.util.Scanner;

/**This class demonstrates queue/circular queue operations
 * @author Rohan Philip & Rafeek Muhammad
 * 
 */

public class Main
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        //X could be declared as a StaticQueue,StaticCircularQueue or DynamicQueue object
        StaticQueue X = new StaticQueue();
        X.createQueue();    //comment out createQueue for Dynamic Queue
        System.out.print("How many elements to insert? : ");
        int num = cin.nextInt();
        System.out.println("Enter elements -");
        for(int i=0;i<num;i++)
            X.enQueue(cin.nextInt());
        X.displayQueue();
        int option;
        do
        {
            System.out.print("\nOperations-\n"+
                "\t1.enQueue\n"+
                "\t2.deQueue\n"+
                "\t3.Display Queue\n"+
                "\tAny other key to Exit\n"+
                "Enter option : ");
            option = cin.nextInt();
            switch(option)
            {
                case 1 : System.out.print("Enter element : ");
                X.enQueue(cin.nextInt());
                break;
                case 2 :  X.deQueue();
                break;
                case 3 : X.displayQueue();
                break;
                default : option=0;
            }
        }while(option!=0);
    }
}