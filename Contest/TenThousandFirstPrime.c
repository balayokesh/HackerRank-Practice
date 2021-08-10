/*
Problem link - https://www.hackerrank.com/contests/kit-ciii-practice-contest-day-36/challenges/euler007/problem
Project Euler #7
*/

#include <stdio.h>

int isPrimeNum (int num);

int main () {
    int t, n;
    scanf ("%d", &t);
    while (t--) {
        scanf ("%d", &n);
        int num = 1;
        int primeNum = 2;
        while (n--) {
            if (isPrimeNum(num) == 1) {
                primeNum = num;
            }
            num++;
        }
        printf ("%d", primeNum);
    }
    return 0;
}

int isPrimeNum (int num) {
    if (num == 1) {
        return 0;
    }
    for (int i=2; i<=num-1; i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}