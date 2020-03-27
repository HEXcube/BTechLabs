import java.util.Scanner;

/**This class intends to demonstrate searching an element in an array
 * @author Rohan Philip
 * 
 */

public class SearchArray 
{
    public static void main(String[] args)
    {
        int search_key,pos;

        int[] arr = ArrayIO.input();

        System.out.print("Enter the element you wish to search : ");
        Scanner cin = new Scanner(System.in);
        search_key = cin.nextInt();

        /*The given metod call could be replaced by search() method
         * of LinearSearch,BinarySearch or FibonacciSearch classes
         * in the same default package.
         */
        pos = BinarySearch.search(arr,search_key);

        if(pos>-1)
            System.out.print("\n"+search_key+" was found at "+(pos+1)+
                "th position in the given array");
        else
            System.out.print("\n"+search_key+" could not be"+
                " found in the array");
    }
}
