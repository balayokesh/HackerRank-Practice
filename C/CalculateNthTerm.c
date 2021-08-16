#include <stdio.h>

int recurse (int n, int first, int second, int third) {
    return recurse (n-1) + (n-2) + (n-3);
}

int main () {
    int n, first, second, third;
    recurse (n , first, second, third);
    return 0;
}