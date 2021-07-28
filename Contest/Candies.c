/*
Problem link: https://www.hackerrank.com/contests/kit-ciii-practice-contest-day-30/challenges/candies/problem

Alice is a kindergarten teacher. She wants to give some candies to the children in her class.  All the children sit in a line and each of them has a rating score according to his or her performance in the class.  Alice wants to give at least 1 candy to each child. If two children sit next to each other, then the one with the higher rating must get more candies. Alice wants to minimize the total number of candies she must buy.

Example
She gives the students candy in the following minimal amounts: . She must buy a minimum of 10 candies.

Function Description
Complete the candies function in the editor below.
candies has the following parameter(s):
int n: the number of children in the class
int arr[n]: the ratings of each student

Returns
int: the minimum number of candies Alice must buy

Input Format
The first line contains an integer, , the size of .
Each of the next  lines contains an integer  indicating the rating of the student at position .

Sample Input 0
3
1
2
2
Sample Output 0
4
Explanation 0
Here 1, 2, 2 is the rating. Note that when two children have equal rating, they are allowed to have different number of candies. Hence optimal distribution will be 1, 2, 1.

Sample Input 1
10
2
4
2
6
1
7
8
9
2
1
Sample Output 1
19

Sample Input 2
8
2
4
3
5
2
6
4
5
Sample Output 2
12
*/

#include <stdio.h>

void candies(int n, int arr_count, int arr[]) {
    int sum = 0;
    for (int i=0; i<arr_count; i++) {
        if (i == arr_count - 1) {
            if (arr[i-1] > arr[i]) {
                sum += 1;
            }
            else {
                sum += arr[i]/arr[i-1];
            }
        }
        else {
            if (arr[i+1] > arr[i]) {
                sum += arr[i+1]/arr[i];
            }
            else {
                sum += 1;
                // printf ("%d\n", arr[i]/arr[i+1]);
            }
        }
    }
    printf ("%d", sum);
}

int main()
{
    int t;
    scanf ("%d", &t);
    int arr[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }
    candies(t, t, arr);
    return 0;
}