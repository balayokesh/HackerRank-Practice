/*
print the given pattern

Input Format
n=> positive integer

Constraints
positive integer

Output Format
pattern

Sample Input 0
5

Sample Output 0

    *
   **
  ***
 ****
*****
****
***
**
*
*/

#include <stdio.h>

int main () {
    int n;
    scanf ("%d", &n);
    int stars = 1;

    for (int times=1;times<n*2;times++) {
        if (stars <= n) {
            printSpace(n-stars);
            printStar(stars);
            printf ("\n");
        }
        else {
            printStar(n - (stars-n));
            printSpace(stars-n);
            printf("\n");
        }
        stars++;
    }
    return 0;
}

void printSpace (int spaces) {
    while (spaces--) {
        printf (" ");
    }
}

void printStar (int stars) {
    while (stars--) {
        printf ("*");
    }
}