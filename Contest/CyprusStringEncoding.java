/*
It is a Type of Encoding in which the given string is Encoded by Substituting the Each Character of the String with 'n'th Character from the Current Character in cyclic Order.

Input Format

s1 -> String Input n -> integer position for reference.

Constraints

Not applicable

Output Format

Ouput to be a String

Sample Input 0

cake
2
Sample Output 0

keca
Sample Input 1

hai
4
Sample Output 1

Invalid Input
*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scanner = new Scanner(System.in);
	    String str = scanner.nextLine();
	    int n = scanner.nextInt();
	    
	    if (str.length() <= n) {
            System.out.println("Invalid Input");
	    }
	    else {
		    char[] chr = str.toCharArray();
		    for (int i=n; i<str.length(); i++) {
		        System.out.print(chr[i]);
		    }
		    for (int i=0; i<n; i++) {
		        System.out.print(chr[i]);
		    }
	    }
	}
}
