import java.util.Scanner;

/**This class demonstrates stack operations
 * @author Rohan Philip & Rafeek Muhammad
 * 
 */

public class Main
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        //X could be declared as a StaticStack or DynamicStack object
        StaticStack X = new StaticStack();
        X.createStack();    //comment out createStack for Dynamic Stack
        System.out.print("How many elements to insert? : ");
        int num = cin.nextInt();
        System.out.println("Enter elements -");
        for(int i=0;i<num;i++)
            X.push(cin.nextInt());
        X.displayStack();
        int option;
        do
        {
            System.out.print("\nOperations-\n"+
                "\t1.Push\n"+
                "\t2.Pop\n"+
                "\t3.Display Stack\n"+
                "\tAny other key to Exit\n"+
                "Enter option : ");
            option = cin.nextInt();
            switch(option)
            {
                case 1 : System.out.print("Enter element : ");
                X.push(cin.nextInt());
                break;
                case 2 :  X.pop();
                break;
                case 3 : X.displayStack();
                break;
                default : option=0;
            }
        }while(option!=0);
    }
}