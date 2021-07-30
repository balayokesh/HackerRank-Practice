/*
Problem link: https://www.hackerrank.com/contests/kit-ciii-practice-contest-day-32/challenges/add-operators/problem

Given a string num that contains only digits and an integer target, return all possibilities to add the binary operators '+', '-', or '*' between the digits of num so that the resultant expression evaluates to the target value.

Input Format
A string which consist of numbers An integer which is the target value

Constraints
1<= num.length <= 10
num consists of only digits.
-231 <= target <= 231 - 1

Output Format
An array with string which is combinations of the numbers and operators to get the target value

Sample Input 0
123
6
Sample Output 0
1*2*3 1+2+3

Sample Input 1
232
8
Sample Output 1
2*3+2 2+3*2

Sample Input 2
105
5
Sample Output 2
1*0+5 10-5

Sample Input 3
00
0
Sample Output 3
0*0 0+0 0-0
*/

#include <stdio.h>

static int input;
static int target;
static int digits;

void add (int arr[]);
void mul (int arr[]);

int main () {
    scanf ("%d %d", &input, &target);
    int arr[10];
    int i = 0;

    // Split into digits and store it in array
    while (input != 0) {
        arr[i] = input%10;
        input/=10;
        digits++;
        i++;
    }

    mul(arr);
    add(arr);
    
    return 0;
}

void mul (int arr[]) {
    int res = 1;
    for (int i=0; i<digits; i++) {
        res *= arr[i];
    }
    if (res == target) {
        for (int i=digits-1; i>=0; i--) {
            if (i == 0) 
                printf ("%d ", arr[i]);
            else
                printf ("%d*", arr[i]);
        }
    }
}

void add (int arr[]) {
    int sum = 0;
    for (int i=0; i<digits; i++) {
        sum += arr[i];
    }
    if (sum == target) {
        for (int i=digits-1; i>=0; i--) {
            if (i == 0)
                printf ("%d ", arr[i]);    
            else 
                printf ("%d+", arr[i]);
        }
    }
}