/*
You are given a string S of length N consisting of lowercase characters 'a' and 'b'. In one operation, you can select a character and make it equal to one of its adjacent characters. For example, if S = "aab", in one operation you can convert it to any of the following:

1. "aab": By changing the 1st character to the 2nd character.
2. "aab": By changing the 2nd character to the 1st character.
3. "abb": By changing the 2nd character to the 3rd character.
4. "aaa": By changing the 3rd character to the 2nd character.

Find the minimum number of operations to make all the characters in the string equal.
Input
The first line of the input contains a single integer N.
The second line contains a string S of length N consisting of only 'a' and 'b'.

Constraints:
1 ≤ N ≤ 5000
Output
Print the minimum number of operations to make all the characters in the string equal.

Sample Input 1:
4
abaa
Sample Output 1:
1
Sample Explanation 1:
You can replace the 'b' at the second position by the 'a' at the first position. Now the string becomes "aaaa". 

Sample Input 2:
5
bbbaa
Sample Output 2:
2
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf ("%d ", &n);
    char str[n];
    int acount = 0;
    int bcount = 0;
    gets(str);
    for (int i=0; i<n; i++) {
        if (str[i] == 'a')
            acount++;
        else if (str[i] == 'b')
            bcount++;
    }
    
    if (acount > bcount) 
        printf ("%d", bcount);
    else if (bcount > acount) 
        printf ("%d", acount);
	return 0;
}
