/*
A set of 'n' numbers are given such that first number is the first minimum and second number is first maximum and so on

Input Format

n=> size of array a[]=> array of n elements

Constraints

all are positive integers

Output Format

Alternate sorted data

Sample Input 0

4
1
2
3
4
Sample Output 0

1 4 2 3
Sample Input 1

5
2
1
3
4
5
Sample Output 1

1 5 2 3 4
*/

#include <stdio.h>

int main()
{
    // input
    int n;
    int min = 1000, max = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }
    
    // find min
    for (int i=0; i<n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    
    // find max
    for (int i=0; i<n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    
    printf("%d ", min);
    printf("%d ", max);
    
    for (int i=0; i<n; i++) {
        if (arr[i] != max && arr[i] != min)
            printf("%d ", arr[i]);
    }
    
    return 0;
}
