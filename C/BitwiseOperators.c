#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
void calculate_the_maximum(int n, int k) {
    int arr[n];
    int expAdd, expOr, expXor;
    int maxAnd = 0, maxOr = 0, maxXor = 0;
    for (int i=1; i<=n; i++) {
        arr[i-1] = i;
    }
    
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            expAdd = arr[i] & arr[j];
            expOr = arr[i] | arr[j];
            expXor = arr[i] ^ arr[j];
            if (expAdd > maxAnd && expAdd < k)
                maxAnd = expAdd;
            if (expOr > maxOr && expOr < k)
                maxOr = expOr;
            if (expXor > maxXor && expXor < k)
                maxXor = expXor;
        }
    }
    
    printf ("%d\n%d\n%d", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
