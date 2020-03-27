
/**
 * BubbleSort class contains sort method.
 * 
 * @author Rohan Philip
 * @version 12-17-2011
 */
public class BubbleSort
{
    /**
     * sort() method
     * 
     * @param  Arr - the array to be sorted
     * @return  nothing
     */
    public static void sort(int[] Arr)
    {
        int n = Arr.length-1;
        for(int i=0;i<n;i++)
            for(int j=n;j>i;j--)
                if(Arr[j]<Arr[j-1])
                    ArrayIO.swap(Arr,j-1,j);
    }
}
