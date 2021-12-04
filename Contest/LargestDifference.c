/*
Find the largest difference between two numbers in an array such that the largest number always occurs after the smallest number . If no such difference is there then print ‘-1’.

Input Format

line 1=> number of inputs line 2- array of 'n' inputs

Constraints

1<=n<=50

Output Format

Largest difference as whole number

Sample Input 0

10
83 68 36 27 86 46 84 67 65 92
Sample Output 0

65
Sample Input 1

10
99 9 8 7 6  5 4 3 2 1
Sample Output 1

-1
*/

#include <stdio.h>

int main () {
    // Input
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }

    int flag = 0;
    for (int i=0; i<n; i++) {
        if (i != 0) {
            if (arr[i-1] > arr[i]) {
                flag = 1;
            }
            else {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 0) {
        int max = 1;
        int min = 1000;
        for (int i=0; i<n; i++) {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
        printf("%d", max-min);
    }
    else
        printf ("-1");

    return 0;
}