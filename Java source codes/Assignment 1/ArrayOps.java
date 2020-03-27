import java.util.Scanner;

/**
 * @author Rohan Philip
 *
 */
public class ArrayOps
{
	public static void main(String[] args)
	{
		System.out.print("\nHow many array elements do you want to enter? : ");
		Scanner cin = new Scanner(System.in);
		int lim = cin.nextInt();
		
		int arr[] = new int[lim];
		System.out.print("Enter the elements-\n");
		for(int i=0 ; i<lim ; i++)
		{
			arr[i] = cin.nextInt();
		}
		
		System.out.print("Enter the position of the element to be deleted : ");
		int pos = cin.nextInt();
		lim--;
		for(int i=pos-1; i<lim ; i++)
		{
			arr[i] = arr [i+1];
		}
		
		System.out.print("Array after deleting "+pos+"th element is:\n");
		for(int i=0 ; i<lim ; i++)
		{
			System.out.print(" "+arr[i]);
		}
		
		System.out.print("\nEnter the element you wish to insert : ");
		int ins = cin.nextInt();
		System.out.print("Specify the position to which "+ins+
				" has to be inputed : ");
		pos = cin.nextInt();

		pos--;
		for(int i=lim ; i>pos ; i--)
			arr[i]=arr[i-1];
		arr[pos]=ins;
		lim++;
		
		System.out.print("Array after inserting "+ins+" into the position "+(pos+1)+" is :\n");
		for(int i=0 ; i<lim ; i++)
		{
			System.out.print(" "+arr[i]);
		}
	}

}
/*OUTPUT

How many array elements do you want to enter? : 6
Enter the elements-
1 2 3 4 5 6
Enter the position of the element to be deleted : 6
Array after deleting 6th element is:
 1 2 3 4 5
Enter the element you wish to insert : 7
Specify the position to which the 7 has to be inputed : 6
Array after inserting 7 into the position 6 is :
 1 2 3 4 5 7

*/