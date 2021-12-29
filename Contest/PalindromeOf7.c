/*
A number 'n' is given you have to check whether the given number is palindrome or not. if it is a palindrome check whether the sum of the digits is multiple of 7

if it is not a palindrome check whether the product of digits is muliple of 7

Input Format

n=> non posiitve integer

Constraints

n=> non posiitve integer

Output Format

2 lines of output

line 1 -palindorme or not
line 2- is it muliple of 7(sum of digits or product of digits)
Sample Input 0

232
Sample Output 0

palindrome number
sum of digits is muliple of 7
Sample Input 1

223
Sample Output 1

not a palindrome number
product of digits is not a multiple of 7
Sample Input 2

217
Sample Output 2

not a palindrome number
product of digits is a multiple of 7
Sample Input 3

606
Sample Output 3

palindrome number
sum of digits is not a multiple of 7
*/

#include <stdio.h>

void product (int n) {
    int prod = 1;
    int rem;
    while (n != 0) {
        rem = n % 10;
        prod *= rem;
        n /= 10;
    }
    if (prod % 7 == 0)
        printf ("product of digits is a multiple of 7");
    else
        printf ("product of digits is not a multiple of 7");
}

void sum (int n) {
    int sum = 0;
    int rem;
    while (n != 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    if (sum % 7 == 0)
        printf ("sum of digits is muliple of 7");
    else
        printf ("sum of digits is not a multiple of 7");
}

int main()
{
    int n;
    scanf ("%d", &n);
    
    int reversedN = 0;
    int nCpy = n;
    int rem;
    while (nCpy != 0) {
        rem = nCpy % 10;
        nCpy /= 10;
        reversedN = reversedN * 10 + rem;
    }
    if (n == reversedN) {
        printf ("palindrome number\n");
        sum(n);
    }
    else {
        printf ("not a palindrome number\n");
        product(n);
    }
    
    return 0;
}
