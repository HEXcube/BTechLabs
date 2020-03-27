
/**
 * @author Rohan Philip
 *
 */
public class LinearSearch
{
    public static int search(int[] Arr,int key)
    {
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]==key)
                return i;
        }
        return -1;
    }
}
