/*
A number 'n' is given you have to print first 'M' set of fibinocci number that are greater than 'n' .

'M' is calcualte by using the formula (n%4)+1

Input Format

n=> A non zero positive number

Constraints

n is positive number

Output Format

set of fibinocci numbers

Sample Input 0

26
Sample Output 0

34
55
89
*/

#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int m = (n%4) + 1;
    
    // To find prevNum
    int prevNum = 1;
    int currNum = 1;
    int temp;
    while (currNum < n) {
        temp = currNum;
        currNum += prevNum;
        prevNum = temp;
        if (currNum == n) {
            break;
        }
    }
    printf ("%d\n", currNum);
    
    for (int i=0; i<m-1; i++) {
        temp = currNum;
        currNum += prevNum;
        prevNum = temp;
        printf ("%d\n", currNum);
    }
    
    return 0;
}
