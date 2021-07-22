/*
Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:
'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).
The matching should cover the entire input string (not partial)

Input Format
String s and pattern p

Constraints
0 <= s.length
p.length <= 2000
s contains only lowercase English letters.
p contains only lowercase English letters, '?' or '*'

Output Format
True If pattern Matches Else False

Sample Input 0
aa
*
Sample Output 0
True
Explanation 0
'*' matches any sequence.

Sample Input 1
cb
?a
Sample Output 1
False
Explanation 1
'?' matches 'c', but the second letter is 'a', which does not match 'b'

Sample Input 2
adceb
*a*b
Sample Output 2
True
Explanation 2
The first '' matches the empty sequence, while the second '' matches the substring "dce".
*/

#include <stdio.h>
#include <string.h>

int main () {
    char s[100];
    char p[100];
    int flag = 0;
    int starSequence = 0;
    int j = 0;
    gets(s);
    gets(p);
    for (int i=0; i<strlen(s); i++) {
        if (s[i] == p[j] || p[j] == '?') {
            flag = 1;
            starSequence = 0;
        }
        else if (s[i] != p[j]) {
            if (p[j] == '*') {
                starSequence = 1;
                flag = 1;
            }
            else {
                if (starSequence == 1) {
                    flag = 1;
                    --j;
                }
                else {
                    flag = 0;
                    break;
                }
                
            }
        }
        ++j;
    }
    (flag == 1) ? printf("True") : printf("False");
    return 0;
}