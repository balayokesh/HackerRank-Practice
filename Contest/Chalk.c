#include <stdio.h>
#include <math.h>

int main () {
    // input
    int n;
    scanf ("%d", &n);
    int days = n;

    // find required values
    float minSize = 1 / sqrt(n);
    int reqPiecePerUnitChalk = (int) 1 / minSize;
    
    // logic
    int exp;
    do {
        if (reqPiecePerUnitChalk == exp) {
            days++;
            break;
        }
        else {
            exp = (int) (n/minSize) / n;
            days += exp;
            n = exp;
        }
    }
    while (exp >= reqPiecePerUnitChalk);
    
    // output
    printf("%d", days);
    return 0;
}
