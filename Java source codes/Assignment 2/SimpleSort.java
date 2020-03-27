
/**
 * SimpleSort class contains sort method.
 * 
 * @author Rohan Philip
 * @version 12-17-2011
 */
public class SimpleSort
{
    /**
     * sort() method
     * 
     * @param  Arr - the array to be sorted
     * @return  nothing
     */
    public static void sort(int[] Arr)
    {
        for(int i=0;i<Arr.length;i++)
            for(int j=i+1;j<Arr.length;j++)
                if(Arr[j]<Arr[i])
                    ArrayIO.swap(Arr,i,j);
    }
}
