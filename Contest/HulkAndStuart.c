/*
In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.

Input Format
n -> length of the list n number of list elements

Constraints
0

Output Format
2 integers denoting max and min

Sample Input 0
5
5 3 4 2 1
Sample Output 0
5 1
Explanation 0
here 5 is the maximum and 1 is the minimum
*/

#include <stdio.h>

int main () {
    int t;
    int min=100, max=0;
    scanf ("%d", &t);
    int arr[t];
    for (int i = 0; i<t; i++) {
        scanf ("%d", &arr[i]);
    }
    for (int i = 0; i<t; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf ("%d %d", max, min);
    return 0;
}