/*
An array of 'n' elements are given you have to sort the given number based on the frequency of occurence , starting from lower occurence to higher occurence.

Input Format

n=> size of array a[]=> followed by an array of n inputs

Constraints

n>=1

Output Format

Sorted array based on frequency

Sample Input 0

4
1
2
2
3
Sample Output 0

1 3 2 2
Sample Input 1

4
1
2
1
3
Sample Output 1
 
2 3 1 1
*/

#include <stdio.h>

int main()
{
    // Input part
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }
    
    // Problem logic here
    int count = 0;
    int highFrequencyNum;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > 1) {
            highFrequencyNum = arr[i];
            break;
        }
        count = 0;
    }
    
    // Print formatted output
    for (int i=0; i<n; i++) {
        if (arr[i] != highFrequencyNum)
            printf ("%d ", arr[i]);
    }
    for (int i=0; i<count; i++) {
        printf ("%d ", highFrequencyNum);
    }
    
    return 0;
}
