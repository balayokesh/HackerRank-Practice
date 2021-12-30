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

// alternate solution
/*
#include <stdio.h>

int main()
{
    int n, spaces, stars;
    scanf ("%d", &n);
    
    for (int i=1; i<=n; i++) {
        spaces = n-i;
        for (int j=0; j<n; j++) {
            if (spaces) {
                printf (" ");
                spaces--;
            }
            else
                printf ("*");
        }
        printf ("\n");
    }
    
    for (int i=1; i<=n; i++) {
        stars = n-i;
        for (int j=0; j<n; j++) {
            if (stars) {
                printf ("*");
                stars--;
            }
            else
                printf (" ");
        }
        printf ("\n");
    }

    return 0;
}
*/
