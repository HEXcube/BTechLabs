
/**
 * MergeSort class contains sort(),mergeSort() and merge() methods.
 * 
 * @author Rohan Philip
 * @version 12-17-2011
 */
public class MergeSort
{
    /**
     * sort() method
     * 
     * @param  Arr - the array to be sorted
     * @return  nothing
     */
    public static void sort(int[] Arr)
    {
        mergeSort(Arr,0,Arr.length-1);
    }

    /**
     * mergeSort() method
     *
     * @param  Arr - the array to be sorted
     * @param  left - lower bound of array
     * @param  right - upper bound of array
     * @return  nothing
     */
    public static void mergeSort(int[] Arr,int left,int right)
    {
        if(left >= right)
            return;
        else
        {
            int middle = (left+right)/2;
            mergeSort(Arr,left,middle);
            mergeSort(Arr,middle+1,right);
            merge(Arr,left,middle,right);
        }
    }

    /**
     * merge() method
     *
     * @param  Arr - the array to be sorted
     * @param  low - lower bound of array
     * @param  mid - middle index of array
     * @param  high - upper bound of array
     * @return  nothing
     */
    public static void merge(int[] Arr,int low,int mid,int high)
    {
        int i,j,k;
        int[] Temp = new int[high-low+1];

        i=low;
        j=mid+1;
        k=0;

        while((i<=mid)&&(j<=high))
        {
            if(Arr[i]<=Arr[j])
            {
                Temp[k] = Arr[i];
                i++;
            }
            else
            {
                Temp[k] = Arr[j];
                j++;
            }
            k++;
        }

        while(i<=mid)
        {
            Temp[k] = Arr[i];
            i++;
            k++;
        }

        while(j<=high)
        {
            Temp[k] = Arr[j];
            j++;
            k++;
        }

        for(i=low,j=0 ; j<k ; j++,i++)
        {
            Arr[i] = Temp[j];
        }
    }
}