/*
A string of length 'l' has to be compressed as small as it can be. Any string that has a consecutive triplet of alphabet can be reduced to an alphabet pair . Find out the optimal reduced string.

Input Format

line 1: String

Constraints

A string

Output Format

Reduced string .

Sample Input 0

aaabbaa
Sample Output 0

aabbaa
Sample Input 1

aaaabbbcca
Sample Output 1

aabbcca
*/

import java.util.*;

public class Main
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();
        int len = str.length();
        int lenCpy = len;
        char[] strChar = str.toCharArray();
        
        for (int i=0; i<len-2; i++) {
            if (strChar[i] == strChar[i+1] && strChar[i+1] == strChar[i+2]) {
                strChar[i] = ' ';
                i--;
            }
        }
        
        for (int i=0; i<len; i++) {
            if (strChar[i] != ' ')
                System.out.print(strChar[i]);
        }
	}
}
