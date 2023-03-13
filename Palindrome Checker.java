
import java.util.Scanner;
import java.util.Locale;

public class LazoAeron2 {
	public static void main (String[] args) {
		
		//Declarations
		String strPalindrome;
		String lowercase;
		char[] arrWords = new char[100];
		char[] Reverse = new char[100];
		int i;
		int j;
		int True=0;
		
		Scanner Palindrome = new Scanner(System.in);
		
		//Input and Converting the input into lowercase
		System.out.print("Enter a string: ");
		strPalindrome = Palindrome.nextLine();
		lowercase = strPalindrome.toLowerCase();
		
		//Putting the String into a Character Array
		for(i=0; i < strPalindrome.length(); i++)
			arrWords[i] = lowercase.charAt(i);
		
		//Putting the value of the String in Reverse
		for(i=strPalindrome.length()-1, j=0 ; i>=0; i--,j++)
			Reverse[j] += arrWords[i];
		
		//Comparing the Original string to Reversed String
		for(i=0; i<strPalindrome.length(); i++) 
		{
			if(arrWords[i] == Reverse[i])
			True += 1;
		} 
		
		//Output
		if(True == strPalindrome.length())
			System.out.print("The String you entered is a Palindrome");
		else if (True != strPalindrome.length())
			System.out.print("The String you entered is not a Palindrome");
			
	}
}
