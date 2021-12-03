/*
Raju and rani are playing a game. Rani challenged raju to fill a tub with a water of 'l' liters only using measurment cups of 1000 ml , 500 ml and 100 ml only with total of only 'n' usage of all the mugs in total. Tell me who won the bet.

Input Format

l-> capcity of tub to get filled. n-> total maximum usage of measurement cups overall.

Constraints

l,n are whole numbers.

Output Format

raju or rani won.

Sample Input 0

1550
3
Sample Output 0

Raju won the bet
Sample Input 1

1550
2
Sample Output 1

Raju won the bet
Sample Input 2

10000
7
Sample Output 2

Rani won the bet
Sample Input 3

22000
12
Sample Output 3

Rani won the bet
*/

#include <stdio.h>

int main () {
    int quantity;
    int n;
    scanf ("%d %d", &quantity, &n);
    if (quantity > 1000 * n )
        printf("Rani won the bet");
    else 
        printf("Raju won the bet");
    return 0;
}