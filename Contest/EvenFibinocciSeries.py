'''
You have to generate the first 'n' fibinocci numbers in the even position order e.g 2nd , 4th ,6th fibinocci untill nth elemnt in even position.

by default first two terms are 0 1

Input Format

n=>number of terms to be printed

Constraints

na

Output Format

set of n fibinooci numbers in even position

Sample Input 0

6
Sample Output 0

1 2 5 13 34 89
Sample Input 1

4
Sample Output 1

1 2 5 13
'''

a = int(input())

fib = [0, 1]

for i in range ((a * 2) - 2):
    num = fib[i] + fib[i+1]
    fib.append(num)
    
for i in range (a*2):
    if ((i+1) % 2 == 0):
        print(fib[i], end=' ')
