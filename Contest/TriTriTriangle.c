/*
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

Input Format
3 integers A,B,C denoting the angles

Constraints
0<=A,B,C<=180

Output Format
"Valid" or "Not_Valid"

Sample Input 0
30 40 110
Sample Output 0
Valid
Explanation 0
30+40+110=180

Sample Input 1
180 0 0
Sample Output 1
Not_Valid
Explanation 1
180+0+0=180 but these angles doesn't form a triangle
*/

#include <stdio.h>

int main () {
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    if (a + b + c == 180 && a>0 && b>0 && c>0) {
        printf ("Valid");
    }
    else {
        printf ("Not_Valid");
    }
    return 0;
}