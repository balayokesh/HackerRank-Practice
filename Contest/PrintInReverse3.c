/*
Given a linked list, write a function to reverse every k nodes (where k is an input to the function).

Input Format

n=> number of nodes in a list. a [n] => list of nodes in a list. k=> reversing sequence in pairs.

Constraints

N <=20

A <=25

K <=5

Output Format

sorted sequence

Sample Input 0

10
1 2 3 4 5 6 7 8 9 0
3
Sample Output 0

3 2 1 6 5 4 9 8 7 0
*/

#include <stdio.h>

int main()
{
    // Input
    int n, m;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }
    scanf ("%d", &m);
    
    // Program logic
    for (int i=0; i<n; i+=m) {
        if ((n-i) >= m) {
            for (int j=i+m-1; j>=i; j--) {
                printf ("%d ", arr[j]);
            }
        }
        else {
            printf ("%d", arr[i]);
        }
    }

    return 0;
}
