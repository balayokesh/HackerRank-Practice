/*
There are 3 labs in the CSE department. The labs are L1, L2, and L3 with a seating capacity of x, y, and z respectively. A single lab needs to be allocated to a class of 'n' students. The labs need to be utilized to the maximum i.e the number of systems used should not be minimal. Which lab needs to be allocated to this class?

Input Format
Input consists of 4 integers
The first input denotes 'x'
The second input denotes 'y'
The third input denotes 'z'
The fourth input denotes 'n'

Constraints
all are integers

Output Format
Print the lab which is suitable for 'n' number of students

Sample Input 0
30
40
20
15
Sample Output 0
L1
Sample Input 1
30
40
20
35
Sample Output 1
L2
*/

#include <stdio.h>

int main () {
    int x, y, z, n;
    scanf("%d %d %d %d", &x, &y, &z, &n);
    
    if (x >= n) {
        printf("L1");
        return 0;
    }
    if (y >= n) {
        printf("L2");
        return 0;
    }
    if (z >= n) {
        printf("L3");
        return 0;
    }
}
