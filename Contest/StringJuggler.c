/*
There was a "Spelling bee jugler" in a china town . He has a special ability to jugle the letters of words and able to spell it in few seconds. His jugling will be like a pair of jumbled letters as below :

e.g "Welcome" as "Weemloc" (first last , secondfirst,lastsecond ....)alpahbets in order

Input Format

string

Constraints

string

Output Format

juggled string

Sample Input 0

welcome
Sample Output 0

weemloc
Sample Input 1

apple
Sample Output 1

aeplp
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;
    while (1) {
        if (scanf("%c", &str[i]) == -1)
            break;
        else
            i++;
    }
    for (int j=0; j<=(strlen(str)/2) ; j++) {
        if (j == strlen(str)/2) {
            printf("%c", str[j]);
            break;
        }
        else
            printf("%c%c", str[j], str[--i]);
    }
    return 0;
}