#include <stdio.h>

int main () {
    int t, num;
    int sum = 0;
    scanf ("%d", &t);
    while (t--) {
        scanf ("%d", &num);
        sum += num;
    }
    printf ("%d", sum);
    return 0; 
}
