/*
Print the Pattern in the given format

Input Format

Input N: No of rows and Cloumns

Constraints

1<=N>=100

Sample Input 0

5
Sample Output 0

1
24
135
2468
13579
Sample Input 1

200
Sample Output 1

Invalid Input
*/

#include <stdio.h>

int main() {
    int n;
    int start;
    
    scanf ("%d", &n);
    
    if (n > 100) {
        printf ("Invalid Input");
        return 0;
    }
    
    for (int i=0; i<n; i++) {
        
        if (i%2 == 0) {
            start = 1;       
        }
        else {
            start = 2;
        }
            
        for (int j=0; j<=i; j++) {
            printf ("%d", start);
            start += 2;
        }
        printf ("\n");
    }
    
    return 0;
}
