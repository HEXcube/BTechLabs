/**
 * Convert temperature from celsius to fahrenheit
 * 
 * @author (Rohan Philip) 
 * @version (8-11-2011)
 */

import java.util.Scanner;

public class CelToFar 
{
	public static void main(String args[])
	{
		float Cel;
		
		System.out.print("\nEnter the temperature in Celcius : ");
		Scanner cin = new Scanner(System.in);
		Cel = cin.nextFloat();
		float Far = 1.8f*Cel+32.0f;
		//Fahrenheit = (9/5)Celsius + 32
		System.out.print("\nThe temperature in Fahrenheit is "+Far);
	}
}

/*OUTPUT

Enter the temperature in Celcius : 37

The temperature in Fahrenheit is 98.6

*/