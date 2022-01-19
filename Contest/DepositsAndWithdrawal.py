"""
Write a function which accepts a list of strings containing details of deposits and withdrawals made in a bank account and returns the net amount in the account.

Input Format

A line of string consists of list of transactions.

Constraints

A line of string consists of list of transactions.

Output Format

Total net amount in numbers

Sample Input 0

["D:300","D:200","W:200","D:100"]
Sample Output 0

400
"""

a = input()

a = a.strip('[')
a = a.strip(']')

ls = a.split(',')
ls_modified = []

for item in ls:
    ls_modified.append(item[1:-1])
    
balance = 0

for i in range(len(ls_modified)):
    if (ls_modified[i][0] == 'D'):
        balance += int(ls_modified[i][2:])
    elif (ls_modified[i][0] == 'W'):
        balance -= int(ls_modified[i][2:])

print(balance)
