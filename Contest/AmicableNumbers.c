#include <stdio.h>

int isAmicable (int n) {
    int sum1 = 0;
    int sum2 = 0;
    int divisor = 1;
    while (divisor < (n/2)+1) {
        if (n % divisor == 0) {
            sum1 += divisor;
        }
        divisor++;
    }
    divisor = 1;
    while (divisor < (sum1/2)+1) {
        if (sum1 % divisor == 0) {
            sum2 += divisor;
        }
        divisor++;
    }

    if (sum2 == n) {
        return 1;
    }
    return 0;
}

int main () {
    int t, n, sum, num, temp;
    scanf ("%d", &t);
    while (t--) {
        scanf ("%d", &n);
        sum = 0;
        num = 220;
        while (num < n) {
            if (isAmicable(num) == 1) {
                sum += num;
            }
        }
    }
    printf ("%d\n", sum);
    return 0;
}