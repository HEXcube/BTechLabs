/**
 * To find the fibonacci numbers upto the given limit
 * 
 * @author (Rohan Philip) 
 * @version (8-11-2011)
 */
import java.util.*;

public class FibonacciSeries 
{
	public static void main(String args[])
	{
		int a=0,b=1,c=1;
		System.out.print("\nEnter the number upto which fibonacci series is to be generated : ");
		Scanner cin = new Scanner(System.in);
		int lim = cin.nextInt();

		System.out.print("Fibonacci series upto "+lim+" is :\n 0");
		while(c<=lim)
		{
			System.out.print(" "+c);
			c=a+b;
			a=b;
			b=c;
		}
	}
}

/*OUTPUT

Enter the number upto which fibonacci series is to be generated : 13
Fibonacci series upto 13 is :
 0 1 1 2 3 5 8 13

*/