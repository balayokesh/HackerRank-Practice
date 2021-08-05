/*
Problem link:
https://www.hackerrank.com/contests/kit-ciii-practice-contest-day-34/challenges/euler145/problem
This problem is a programming version of Problem 145 from projecteuler.net
*/

#include <stdio.h>

int rev (int n) {
    int rev = 0; 
    int last;
    while (n > 0) {
        last = n % 10;
        n /= 10;
        rev = rev * 10 + last;
    }
    return rev;
}

int checkOdd (int item) {
    int isOdd = 1;
    int last;
    int sum = 0;
    sum = item + rev(item);
    while (sum > 0) {
        last = sum % 10;
        sum /= 10;
        if (last % 2 == 0) {
            isOdd = 0;
            break;
        }
    }
    return isOdd;
}

int main () {
    int t, n, count, prevCpy=0, i;
    scanf("%d", &t);

    while (t--) {
        i = 1;
        scanf("%d", &n);

        // Time efficicy
        if (n > prevCpy && prevCpy != 0) {
            i = prevCpy;
        }
        else {
            count = 0;
        }

        prevCpy = n;
        while (i<n-1) {
            i++;
            if (i%10 == 0) {
                continue;
            }
            if (checkOdd(i)) {
                count++;
            }
        }
        printf ("%d\n", count);
    }
    return 0;
}