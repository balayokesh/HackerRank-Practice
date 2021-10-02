/*
Given two arrays of some length n,m they are in an unsorted array , Sort the first and second array in descending . Then after sorting merge them without duplicates.

Note: -1 indicates the end of each array inputs

Input Format

set of numbers.

Constraints

All are numbers

Output Format

Sorted and merged

Sample Input 0

2
3
1
-1
1
3
4
-1
Sample Output 0

3 2 1 4
Sample Input 1

4
1
2
3
-1
5
3
6
-1
Sample Output 1

4 3 2 1 6 5
*/

#include <stdio.h>

int main()
{
    // input
    int arr1[1000], arr2[1000];
    int buffer = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i=0; i<1000; i++) {
        scanf ("%d", &buffer);
        if (buffer == -1)
            break;
        else {
            arr1[i] = buffer;
            count1++;
        }
    }
    buffer = 0;
    for (int i=0; i<1000; i++) {
        scanf ("%d", &buffer);
        if (buffer == -1)
            break;
        else {
            arr2[i] = buffer;
            count2++;
        }
    }
    
    int temp;
    // sort to descending
    for (int i=0; i<count1; i++) {
        for (int j=i+1; j<count1; j++) {
            if (arr1[i] < arr1[j]) {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for (int i=0; i<count2; i++) {
        for (int j=i+1; j<count2; j++) {
            if (arr2[j] > arr2[i]) {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }
    
    // print output
    for (int i=0; i<count1; i++) {
        printf("%d ", arr1[i]);
    }
    int redFlag = 0;
    for (int i=0; i<count2; i++) {
        for (int j=0; j<count1; j++) {
            if (arr2[i] == arr1[j]) {
                redFlag = 1;
                break;
            }
            else
                redFlag = 0;
        }
        if (!redFlag)
            printf("%d ", arr2[i]);
    }

    return 0;
}
