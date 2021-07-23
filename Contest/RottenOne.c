/*
Iman has a box full of apples, Each Apple will have a number on it. if the number is negative then the apple is rotten. our task is to find the number of rotten apples.

Input Format
The first line will contain n denoting number of apples in the box. next line will have n space seperated integers, the numbers on each of the apples.

Constraints
0

Output Format
Print the number of rotten apples. if no such apples print 0.

Sample Input 0
10
1 2 3 4 5 -1 -2 -3 -4 -5
Sample Output 0
5
Explanation 0
there are 5 negative numbers so there will be 5 rotten apples.
*/

#include <stdio.h>

int main () {
    int t;
    int rotten = 0;
    scanf ("%d", &t);
    int arr[t];
    for (int i = 0; i<t; i++) {
        scanf ("%d", &arr[i]);
    }
    for (int i = 0; i<t; i++) {
        if (arr[i] < 0) {
            rotten++;
        }
    }
    printf ("%d", rotten);
    return 0;
}