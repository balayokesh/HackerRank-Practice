#include <stdio.h>

int main () {
    int t;
    scanf ("%d", &t);
    while (t--) {
        int n;
        scanf ("%d", &n);
        int sum = 0;
        int prev = 1;
        int fib = 1;
        int curr = 1;
        while (fib < n) {
            fib = prev + curr;
            prev = curr;
            curr = fib;
            if (fib % 2 == 0 && fib < n) {
                sum += fib;
            }
        }
        printf ("%d\n", sum);
    }
    return 0;
}