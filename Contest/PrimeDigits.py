'''
Prime digits are those numbers whose unit and 10th place digits are individually prime and also the whole number is a prime. You have to print the set of prime digit numbers untill 'n'.

e.g 23 a prime digit( 2 prime, 3 is prime) 31 prime digit( 3 is prime , 1 is also prime) 33 not a prime digit( 33 is not a prime number) 43 not a prime diigt(4 is not a prime , 3 is prime , even the whole 43 is prime)

Input Format

n=> maximum possible prime digit

Constraints

na

Output Format

set of prime digit numbers untill 'n'

Sample Input 0

45
Sample Output 0

1 2 3 5 7 11 13 17 23 31 37
Sample Input 1

71
Sample Output 1

1 2 3 5 7 11 13 17 23 31 37 53 71
'''

a = int(input())

def isPrime(n):
    if (n == 4):
        return 0
    for i in range (2, n // 2):
        if (n % i == 0):
            return 0
    return 1

def isPrimeDigit(n):
    flag = 0
    while (n != 0):
        rem = n % 10
        n //= 10
        if (isPrime(rem)):
            flag = 1
        else:
            flag = 0
            return flag
    return flag

num = 0
while (num <= a):
    if (isPrime(num) and isPrimeDigit(num)):
        print(num, end=" ")
    num += 1
