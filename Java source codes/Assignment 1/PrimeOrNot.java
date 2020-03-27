/**
 * To find out whether a given number is prime or not
 * 
 * @author (Rohan Philip) 
 * @version (8-11-2011)
 */
import java.util.*;

public class PrimeOrNot 
{
	public static void main(String args[])
	{
		System.out.print("\nEnter a number : ");
		Scanner cin = new Scanner(System.in);
		int num = cin.nextInt();

		boolean flag = true;
		for(int i=2;i<=num/2;i++)
	    if(num%i==0)
	    {
	        flag=false;
	        break;
	    }

		System.out.print(num+" is a ");
		if(flag==true)
		System.out.print(" prime number");
		else
		System.out.print(" composite number");
	}
}

/*OUTPUT

Enter a number : 57
57 is a  composite number

*/
