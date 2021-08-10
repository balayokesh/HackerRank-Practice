/*
Problem link: https://www.hackerrank.com/contests/kit-ciii-practice-contest-day-37/challenges/euler016/problem
Derived from project euler #16
*/

#include <stdio.h>
#include <math.h>

int add (long n) {
    int sum = 0;
    int last;
    while (n > 0) {
        last = (int) n%10;
        n /= 10;
        sum += last;
    }
    return sum;
}

int main () {
    int t, num;
    scanf ("%d", &t);
    while (t--) {
        scanf ("%d", &num);
        // long long value = pow(2, num);
        printf ("%d\n", add(pow(2, num)));
    }
    return 0;
}