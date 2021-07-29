/*
Problem Link: https://www.hackerrank.com/contests/kit-ciii-practice-contest-day-31/challenges/scrambled/problem

We can scramble a string s to get a string t using the following algorithm:
If the length of the string is 1, stop.
If the length of the string is > 1, do the following:
Split the string into two non-empty substrings at a random index, i.e., if the string is s, divide it to x and y where s = x + y.
Randomly decide to swap the two substrings or to keep them in the same order. i.e., after this step, s may become s = x + y or s = y + x.
Apply step 1 recursively on each of the two substrings x and y.
Given two strings s1 and s2 of the same length, return true if s2 is a scrambled string of s1, otherwise, return false.

Input Format
String 1 String 2

Constraints
s1.length == s2.length
1 <= s1.length <= 30
s1 and s2 consist of lower-case English letters.
Output Format
True if string is scrambled else False

Sample Input 0
great
rgeat
Sample Output 0
true
Explanation 0
One possible scenario applied on s1 is: "great" --> "gr/eat" // divide at random index. "gr/eat" --> "gr/eat" // random decision is not to swap the two substrings and keep them in order. "gr/eat" --> "g/r / e/at" // apply the same algorithm recursively on both substrings. divide at ranom index each of them. "g/r / e/at" --> "r/g / e/at" // random decision was to swap the first substring and to keep the second substring in the same order. "r/g / e/at" --> "r/g / e/ a/t" // again apply the algorithm recursively, divide "at" to "a/t". "r/g / e/ a/t" --> "r/g / e/ a/t" // random decision is to keep both substrings in the same order. The algorithm stops now and the result string is "rgeat" which is s2. As there is one possible scenario that led s1 to be scrambled to s2, we return true.

Sample Input 1
abcde
caebd
Sample Output 1
false

Sample Input 2
a
a
Sample Output 2
true
*/

#include <stdio.h>
#include <string.h>
int recurse (char str1[], char str2[]);

int main () {
    char str1[30];
    char str2[30];
    gets(str1);
    gets(str2);
    (recurse(str1, str2) == 1) ? (printf ("true")) : ((printf ("false")));
    return 0;
}

int recurse (char str1[], char str2[]) {
    if (str1 == str2)
        return 1;
    else if ((strlen(str1) == 1) > 1)
        recurse(str1, str2);
}
