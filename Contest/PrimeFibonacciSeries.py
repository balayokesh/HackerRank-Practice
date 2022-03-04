'''
You have to print the set of fibinocci series numbers that are only prime untill the given fibinocci sum is not greater than 'n'

Input Format

n=maximum fibinocci sum.

Constraints

na

Output Format

fibinocci sequence consists of sets of numbers in fibinocci sum that are prime.

Sample Input 0

13
Sample Output 0

1 2 3 5 13
Sample Input 1

90
Sample Output 1

1 2 3 5 13 89
'''

a = int(input())

def isPrime(n):
    if (n == 4):
        return 0
    for i in range (2, n//2):
        if (n % i == 0):
            return 0
    else:
        return 1
    
fib = [0, 1]
i = 0
num = 0
while (num < a):
    num = fib[i] + fib[i+1]
    fib.append(num)
    i += 1
    
fib = fib[2:]
for i in fib:
    if (isPrime(i)):
        print(i, end=" ")
