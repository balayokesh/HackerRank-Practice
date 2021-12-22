/*
Raju was a student in a class. His teacher gave an assignmnet on english . He has to find all the possible substrings of length 'n' exactly and print them.

Input Format

str=> A word n=> size of each substring

Constraints

n is a non zero positive number

Output Format

list of substrings of each length 'n'

Sample Input 0

lord
3
Sample Output 0

lor
ord
Sample Input 1

abacus
2
Sample Output 1

ab
ba
ac
cu
us
*/

import java.util.*;

public class Main {
    
	public static void main(String[] args) {
	    Scanner scanner = new Scanner(System.in);
		String str = scanner.nextLine();
		int n = scanner.nextInt();
		
		char[] strChar = str.toCharArray();
		int len = str.length();
		
		for (int i=0; i<str.length(); i+=n) {
		    for (int j=i; j<i+n; j++) {
    		    System.out.print(strChar[j]);
		    }
		    System.out.println();
		    if (i+n < len)
		        i -= n-1;
		}
		
		
	}
}
