/*
Given an AP series one number is missing in the series find the number. The first and last element will not be the missing number.

Input Format

Line 1=> 'n' indicates number of inputs. Line 2=> array of 'n' elements with a missing number in AP series

Constraints

n>0 a[0],a[1],a[2]..a[n] >0

Output Format

Missing number

Sample Input 0

5
1 5 7 9 11
Sample Output 0

3
Sample Input 1

5
2 6 14 18 22
Sample Output 1

10
*/

#include <stdio.h>

int main() {
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }
    int diff = (arr[n-1] - arr[0]) / n;
    
    for (int i=0; i<n; i++) {
        if (i != 0) {
            if (arr[i] - arr[i-1] != diff) {
                printf("%d", arr[i]-diff);
            }
        }
    }
    return 0;
}