#include <stdio.h>

int main() {
    int l;
    int len = 0;
    scanf ("%d", &l);
    
    for (int i=1; i<=l; i++) {
        if (i%2 == 0)
            len = len+2;
        else 
            len++;
    }
    printf ("%d ft length is pond", len);
    
    return 0;
}