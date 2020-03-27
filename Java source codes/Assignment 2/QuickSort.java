
/**
 * QuickSort class contains sort method.
 * 
 * @author Rohan Philip
 * @version 12-17-2011
 */
public class QuickSort
{
    /**
     * sort() method
     * 
     * @param  Arr - the array to be sorted
     * @return  nothing
     */
    public static void sort(int[] Arr)
    {
        quickSort(Arr,0,Arr.length-1);
    }

    public static void quickSort(int[] Arr,int left,int right)
    {
        if(left>=right)
            return;
        int bound = partition(Arr,left,right);
        quickSort(Arr,left,bound-1);
        quickSort(Arr,bound+1,right);
    }

    private static int partition(int[] Arr,int left,int right)
    {
        int l = left+1,
        r = right;
        ArrayIO.swap(Arr,left,(left+right)/2);  //To choose the middle element as pivot
        int pivot = Arr[left];
        while(l<=r)
        {
            while( (l<right)&&(Arr[l]<=pivot) )
                l++;
            while( (r>left)&&(Arr[r]>pivot) )
                r--;
            if(l<r)
                ArrayIO.swap(Arr,l++,r--);
            else
                l++;
        }
        ArrayIO.swap(Arr,left,r);
        return r;
    }
}