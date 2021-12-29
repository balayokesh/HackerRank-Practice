/*
find the gcd of array of 'n' numbers

Input Format

n=> number of elements in an array
followed by a[n] elements.
Constraints

n is a non zero positive number a[n] all are non zero positive numbers

Output Format

gcd of array of n numbers

Sample Input 0

4
2
4
6
8
Sample Output 0

2
Sample Input 1

4
3
6
9
12
Sample Output 1

3
*/

#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int arr[n];
    int lowestNum = 10000;
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
        if (arr[i] < lowestNum)
            lowestNum = arr[i];
    }

    int flag = 0;

    int smallestFactor = lowestNum;
    for (int i=2; i<lowestNum/2; i++) {
        if (lowestNum / i == 0) {
            for (int j=0; j<n; j++) {
                if (arr[j]/i == 0)
                    flag = 1;
                else {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                if (smallestFactor > i)
                    smallestFactor = i;
            }
        }
    }
    printf ("%d", smallestFactor);
    
    return 0;
}
