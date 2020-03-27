import java.util.*;

class OddOrEven 
{
	public static void main(String args[])
	{
		System.out.print("\nEnter a number : ");
		Scanner cin = new Scanner(System.in);
		int num = cin.nextInt();

		System.out.print(num+" is an ");
		if(num%2==0)
		System.out.print(" even number");
		else
		System.out.print(" odd number");
	}
}

/*OUTPUT

Enter a number : 7
7 is an  odd number

*/