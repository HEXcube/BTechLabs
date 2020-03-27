/**This class demonstrates sorting an array
 * @author Rohan Philip
 * 
 */

public class SortArray
{
    public static void main(String[] args)
    {
        int[] Arr = ArrayIO.input();

        /*The given metod call could be replaced by sort() method
         * of SimpleSort,SelectionSort,BubbleSort,InsertionSort,
         * QuickSort,MergeSort or ShellSort classes in the same default package.
         */
        ShellSort.sort(Arr);

        System.out.println("Array after sorting :");
        ArrayIO.output(Arr);
    }
}