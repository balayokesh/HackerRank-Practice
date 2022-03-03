/*
you have to print the given matrix in spiral pattern in clock wise direction from outer to inner

Input Format

set of 9 inputs in row order(3x3)

Constraints

na

Output Format

data printed in spiral order

Sample Input 0

1
2
3
4
5
6
7
8
9
Sample Output 0

original matrix
1 2 3
4 5 6
7 8 9
spiral data
1 2 3 6 9 8 7 4 5
Sample Input 1

10
20
30
40
50
60
70
80
90
Sample Output 1

original matrix
10 20 30
40 50 60
70 80 90
spiral data
10 20 30 60 90 80 70 40 50
*/

#include <stdio.h>

int main() {
    int a[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    
    printf ("original matrix\n");
    for (int row=0; row<3; row++) {
        for (int column=0; column<3; column++) {
            printf("%d ", a[row][column]);
        }
        printf ("\n");
    }
    
    printf ("spiral data\n");
    printf ("%d %d %d %d %d %d %d %d %d", a[0][0], a[0][1], a[0][2], a[1][2], a[2][2], a[2][1], a[2][0], a[1][0], a[1][1]);
    
    return 0;
}
