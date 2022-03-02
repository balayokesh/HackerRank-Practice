'''
A list of positions are given as input , Take each position as a value and print the prime number at particular position on a natural number list

Input Format

line 1=> list of inputs

Constraints

list of integers

Output Format

prime numbers at given positions on a list

Sample Input 0

2 5 3
Sample Output 0

3
11
5
Explanation 0

in a prime number sequence on a natural numbers the list of prime numbers are: 2=>1st term 3=>2nd term 5=>3rd term 7=>4th term 11=>5th term

so the 2,5, 3 terms are : 3 11 5

Sample Input 1

20 19 4 20 19 18 17 16 15 14 13 12 11
Sample Output 1

71
67
7
71
67
61
59
53
47
43
41
37
31
'''

def isPrime (i):
    if (i == 4):
        return 0
    for x in range (2, i//2):
        if (i % x == 0):
            return 0
    return 1        

ls = list(input().split())

for i in range (len(ls)):
    ls[i] = int(ls[i])
    
great = max(ls)
prime = []
i = 2
while (great):
    if (isPrime(i)):
        prime.append(i)
        great -= 1
    
    i += 1
    
for i in ls:
    print(prime[i-1])
