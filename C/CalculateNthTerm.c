#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    // code here
    int tempa, tempb;
    n -= 3;
    while (n--) {
        tempa = a;
        tempb = b;
        a = b;
        b = c;
        c = tempa + tempb;
    }
    return a + b + c;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
