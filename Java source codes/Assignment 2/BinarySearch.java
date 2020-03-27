
/**
 * BinarySearch sorts the array before searching.
 * 
 * @author Rohan Philip
 * @version 12-7-2011
 */
public class BinarySearch
{
    public static int search(int[] Arr,int key)
    {
        int lower=0,upper=Arr.length,mid=0;

        SelectionSort.sort(Arr);
        System.out.println("Array after sorting :");
        ArrayIO.output(Arr);

        while(lower<upper)
        {
            mid=(lower+upper)/2;
            if(Arr[mid]==key)
                break;
            else
            {
                if(key>Arr[mid])
                    lower=mid;
                else 
                    upper=mid;
            }
        }
        if(lower<upper)
            return mid;
        else
            return -1;
    }
}
