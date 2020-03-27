import java.util.Scanner;

/**
 * ArrayIO contains input and output
 * 
 * @author Rohan Philip
 * @version 12-17-2011
 */
public class ArrayIO
{
    /**
     * input() method
     * 
     * @param  none
     * @return the inputed array
     */
    public static int[] input()
    {

        System.out.println("How many elements do you wish to input?");
        Scanner cin = new Scanner(System.in);
        final int lim = cin.nextInt();
        int[] arr = new int[lim];

        System.out.println("Enter the elements-");
        for (int i = 0; i < lim; i++)
        {
            System.out.print("Element " + (i + 1) + " : ");
            arr[i] = cin.nextInt();
        }

        return arr;
    }

    public static void output(int arr[])
    {
        for (int i = 0; i < arr.length; i++)
            System.out.print(" "+arr[i]);
    }

    public static void swap(int[] arr,int i,int j)
    {
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp ;
    }
}