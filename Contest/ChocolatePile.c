/*
Here is an array of pile of chocolates, in every iteration Ayushi chose pile with maximum number of chocolates, after that square root of chocolate remains and rest is eaten by Ayushi. After k iterations find number of chocolates remaining.

Input Format

n=> number of piles of chocolates a [] => number of cocolates on each pile. k=> number of iterations.

Constraints

n,a,k all are non zero positive.

Output Format

Total number of remaining chocolates.

Sample Input 0

6
25 64 9 4 100 98
4
Sample Output 0

45
Sample Input 1

6
25 64 9 4 100 98
10
Sample Output 1

15
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }
    scanf ("%d", &k);
    
    int currentMaxValue = 0;
    int currentMaxIndex = 0;
    
    while (k--) {
        for (int i=0; i<n; i++) {
            if (arr[i] > currentMaxValue) {
                currentMaxValue = arr[i];
                currentMaxIndex = i;
            }
        }
        arr[currentMaxIndex] = sqrt(arr[currentMaxIndex]);
        currentMaxValue = sqrt(arr[currentMaxIndex]);
    }
    
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
    }
    printf ("%d", sum);

    return 0;
}
