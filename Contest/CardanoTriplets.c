/*
Problem link: https://www.hackerrank.com/contests/kit-ciii-practice-contest-day-33/challenges/euler251/problem
This problem is a programming version of Problem 251 from projecteuler.net
*/

#include <stdio.h>
#include <math.h>

int main () {
    int t, n;
    int a, b, c, count, incrementNum;
    scanf ("%d", &t);
    for (int i=0; i<t; i++) {
        a = 1;
        b = 1;
        c = 1;
        count = 0;
        incrementNum = 1;
        scanf ("%d", &n);
        while (1) {
            if (a+b+c > n) {
                break;
            }
            if (a + b + c < n) {
                int bRootC = b*sqrt(c);
                int next1 = a + bRootC;
                int next2 = a - bRootC;
                if (cbrt(next1) + cbrt(next2) == 1) {
                    count++;
                }
            }
            else {
                if (incrementNum == 1) {
                    a++;
                }
                else if (incrementNum == 2) {
                    b++;
                }
                else {
                    c++;
                }
                ++incrementNum;
                if (incrementNum > 2) {
                    incrementNum = 0;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
