/*
A number with 'n' number of digits is given . Print the new number which can be formed by omiting all the even position digits in the given original number

Input Format

x=> a number with some number of digits.

Constraints

n>=10

Output Format

Modified number

Sample Input 0

1234
Sample Output 0

13
Sample Input 1

230
Sample Output 1

20
*/

#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    
    // find length
    int len = 0;
    int ncpy = n;
    while (ncpy != 0) {
        len++;
        ncpy /= 10;
    }
    
    
    int rem = 0;
    for (int i=0; i<len; i++) {
        ncpy = n;
        
        for (int j=i; j<len; j++) {
            rem = ncpy % 10;
            ncpy /= 10;
        }
        
        if (i % 2 == 0) 
            printf ("%d", rem);
    }

    return 0;
}
