/*
Given an unsorted integer array nums, find the smallest missing positive integer.
You must implement an algorithm that runs in O(n) time and uses constant extra space.

Input Format
An array of integers

Constraints
1 <= nums.length <= 5 * 105
-231 <= nums[i] <= 231 - 1

Output Format
The missing smallest postive integer

Sample Input 0
1
2
0
Sample Output 0
3
Sample Input 1
3
4
-1
1
Sample Output 1
2
Sample Input 2
7
8
9
11
12
Sample Output 2
1
*/

#include <stdio.h>

int main () {
    int arr[100];
    int arrSize = 0;
    int i=0;
    int flag = 0;
    while (scanf("%d", &arr[i]) != -1) {
        i++;
        arrSize++;
    }
    int smallestPositive = 1;
    loop:
        for (int j=0; j<arrSize; j++) {
            if (arr[j] == smallestPositive) {
                smallestPositive++;
                // printf ("Incremented smallest positive");
                flag = 1;
                break;
            }
        }

    if (flag == 1) {
        flag = 0;
        goto loop;
    }
    printf ("%d", smallestPositive);
    
    return 0;
}