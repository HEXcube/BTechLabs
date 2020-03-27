import java.util.Scanner;

/**This class demonstrates Priority Queue operations
 * 
 * @author Rohan Philip & Rafeek Muhammad
 */

public class Main
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        /*X could be assigned to xxxPriorityQueue objects
         * where xxx = StaticAsc/StaticDesc/DynamicAsc/DynamicDesc
         */
        PriorityQueue X = new DynamicAscPriorityQueue();
        //X.createQueue();    //comment out createQueue for Dynamic PriorityQueues
        System.out.print("How many elements to insert? : ");
        int num = cin.nextInt();
        System.out.println("Enter elements : data then priority -");
        for(int i=0;i<num;i++)
            X.enQueue( new PrioNode(cin.nextInt(),cin.nextInt()) );
        //Replace PriNode with PrioNode for Dynamic version
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
                case 1 : System.out.print("Enter data then priority : ");
                X.enQueue( new PrioNode(cin.nextInt(),cin.nextInt()) );
                //Replace PriNode with PrioNode for Dynamic version
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