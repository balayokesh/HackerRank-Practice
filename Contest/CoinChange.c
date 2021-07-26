/*
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
You may assume that you have an infinite number of each kind of coin.

Input Format
An array of integers which represents the coins of different denominations.
An integer whic represents total amount of money.

Constraints
1 <= coins.length <= 12
1 <= coins[i] <= 231 - 1
0 <= amount <= 104

Output Format
An integer which is the minimum number of coins required to make the amount.
Sample Input 0
1 2 5
11
Sample Output 0
3
Explanation 0
11 = 5 + 5 + 1

Sample Input 1
2
3
Sample Output 1
-1
Explanation 1
-1 since amount cannot be made up by any combination

Sample Input 2
1
0
Sample Output 2
0
*/

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
