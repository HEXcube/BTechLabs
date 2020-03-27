/**
 * SelectionSort class contains sort method.
 * 
 * @author Rohan Philip
 * @version 12-17-2011
 */
public class SelectionSort
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
        {
            int min=i;
            for(int j=i+1;j<Arr.length;j++)
                if(Arr[j]<Arr[min])
                    min=j;

            if(min!=i)
                ArrayIO.swap(Arr,i,min);

        }
    }
}