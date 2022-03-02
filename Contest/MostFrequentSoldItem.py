'''
In a mall there are 'n' number of transactions had taken place in a day . You were given with a transaction list as tuple collection of (TransactId, itemname, totalamt). Find the item which has been sold most frequently on a list of transactions.

Input Format

Line 1=> 'n' indicates number of transactions next 'n' lines represents list of transactions of the as Tuple data (TransactId, itemname, totalamt)

Constraints

n!=0

Output Format

Line 1 => Average sales of the day Line 2=> Transaction Id ,Itemname and amount of the item sold for maximum amount

Sample Input 0

3
B1001 APPLE 250
B2001 MANGO 300
B3004 APPLE 200
Sample Output 0

APPLE
Sample Input 1

3
B1001 MANGO 20
B2001 MANGO 100
B3004 APPLE 200
Sample Output 1

MANGO
'''

a = int(input())
ls = []

for i in range (a):
    temp = input().split(" ")
    ls.append(temp[1])
    
count_arr = [ls.count(ls[i]) for i in range(a)]
max_count = max(count_arr)

for i in range(a):
    if (ls.count(ls[i]) == max_count):
        print(ls[i])
        break
