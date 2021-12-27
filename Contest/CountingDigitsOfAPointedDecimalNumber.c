/*
A float or double datatype input is given , You have to find the number of digits in the given number.

E.g : ip: 23.34 op: 4 the digits are 2,3,3,4

Input Format

n=> a float or double datatype

Constraints

n=> a float or double datatype

Output Format

number of digits in the floating number

Sample Input 0

12.234
Sample Output 0

5
Sample Input 1

1.2345
Sample Output 1

5
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    scanf ("%lf", &n);
    
    // Finding digit count
    int dcount = 0;
    int m = (int) n;
    while (m != 0) {
        m /= 10;
        dcount++;
    }
    
    // Finding float count
    int fcount = 0;
    while (n != (int) n) {
        n *= 10;
        fcount++;
    }
    
    printf ("%d", dcount + fcount);

    return 0;
}
