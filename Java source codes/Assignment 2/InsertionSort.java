
/**
 * InsertionSort class contains sort method.
 * 
 * @author Rohan Philip
 * @version 12-17-2011
 */
public class InsertionSort
{
    /**
     * sort() method
     * 
     * @param  Arr - the array to be sorted
     * @return  nothing
     */
    public static void sort(int[] Arr)
    {
        int i,j,item;
        for(j=1;j<Arr.length;j++)
        {
            item=Arr[j];
            for(i=j-1 ; (i>=0)&&(item<Arr[i]) ; i--)
                Arr[i+1]=Arr[i];
            Arr[i+1]=item;
        }
    }
}
