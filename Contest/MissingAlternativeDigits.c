#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    
    // find length
    int len = 0;
    int ncpy = n;
    while (ncpy != 0) {
        len++;
        ncpy /= 10;
    }
    
    
    int rem = 0;
    for (int i=0; i<len; i++) {
        ncpy = n;
        
        for (int j=i; j<len; j++) {
            rem = ncpy % 10;
            ncpy /= 10;
        }
        
        if (i % 2 == 0) 
            printf ("%d", rem);
    }

    return 0;
}
