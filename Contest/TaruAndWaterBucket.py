'''
Taru exam is on the head. So she started learning physics. There she learned about Pascal's law. Now she wanted to try an experiment to get a better understanding of the same. For, the experiment Taru has N buckets (numbered from 1,2,3...N) which all are initially empty. She has M number of queries. Each query represents an integer that is of 4 types.

Query 1: Fill all the buckets with water.
Query 2: Empty all even valued buckets (2, 4, 6 ... N).
Query 3: Empty all odd number buckets (1, 3, 5, ... N).
Query 4: Empty all the buckets. (1,2,3...N).
You have to return the number of buckets that are filled after performing M queries.

Input Format

First-line will contain an integer N.
Second-line will contain an Integer M.
Next M lines will contain the query number (1, 2, 3, 4).
Constraints

1<=N <=106
1<=M <=105
Ith query will be in (1, 2, 3, 4)
Empty bucket operation can be done on empty bucket also.
Though it will not make in any difference.
Output Format

Output a single integer denoting the number of buckets that are filled.

Sample Input 0

5 
3 
1 
2 
2
Sample Output 0

3
Explanation 0

Five buckets : bucket 1 ,bucket 2 ,bucket 3 ,bucket 4 ,bucket 5

3 criteria : query 1: fill all buckets :[1,1,1,1,1]=> indicates all are filled query 2: empty even buckets:2,4 buckets alone : [1,0,1,0,1] query 2: empty even buckets:2,4 buckets alone : [1,0,1,0,1]

Totall filled buckets now is 3

Sample Input 1

5 
4 
1 
2 
1
3
Sample Output 1

2
'''

n = int(input())
m = int(input())
ls = [0 for x in range (n)]

for i in range (m):
    query = int(input())

    if (query == 1):
        ls = [1 for x in range(n)]
        
    elif (query == 2):
        for i in range (n):
            if ((i+1)%2 == 0):
                ls[i] = 0
                
    elif (query == 3):
        for i in range (n):
            if ((i+1)%2 != 0):
                ls[i] = 0
        
    elif (query == 4):
        ls = [0 for x in range(n)]

sum = 0
for x in ls:
    sum += x

print(sum)
