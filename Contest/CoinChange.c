#include <stdio.h>
int logic(void);
int i = 0;
int count = 0;
int input[100];
int max = 0;
int sum = 0;
int amount;

int main () {

    while ((scanf("%d", &input[i]) != -1)) {
        i++;
        count++;
    }
    // Find max
    for (int i=0; i<count-1; i++) {
        if (input[i] > max) {
            max = input[i];
        }
    }
    amount = input[count-1];

    // Checks
    if (amount == 0) {
        printf ("%d", 0);
        return 0;
    }
    // Only one coin type is provided
    if (count == 2) {    
        if (amount % input[0] == 0) {
            // do nothing
        }
        else {
            printf("%d", -1);
            return 0;
        }
    }
    printf("%d", logic());
    
    return 0;
}

int logic() {   
    int attempts = 0;
    // First add witht he max valued coin
    while (sum < amount) {
        sum += max;
        ++attempts;
        if (sum == amount) {
            return attempts;
        }
    }
    sum -= max;
    --attempts;
    // Iterate with other available valued coins
    for (int j=0; j<count-1; j++) {
        if (sum % input[j] == 0) {
            sum += input[j];
            ++attempts;
            if (sum == amount) {
                return attempts;
            }
        }
    }
    return -1;
}