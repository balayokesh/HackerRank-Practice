#include <stdio.h>

int int_to_bin (int n) {
    return (n == 0 || n == 1 ? n : ((n%2) + 10 * int_to_bin(n/2)));
}

int main() {
    int a;
    scanf ("%d", &a);
    
    if (a < 0) {
        printf ("Invalid input - Out of range");
        return 0;
    }
    
    printf ("%o%X", a, a);
    
    int bin = int_to_bin(a);
    int rem;
    int count1 = 0;
    int count0 = 0;

    while (bin > 0) {
        rem = bin % 10;
        if (rem == 1)
            count1++;
        if (rem == 0) {
            count0++;
        }
        bin /= 10;
    }

    printf("%d%d", count1, count0);

    return 0;
}