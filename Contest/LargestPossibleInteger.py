'''
Find the largest possible integers by rearranging the numbers in a list

Input Format

line 1=>number of items Line 2=>list of numbers

Constraints

n>=1

Output Format

largest possible number

Sample Input 0

3
17
21
9
Sample Output 0

92117
Sample Input 1

4
3
31
32
5
Sample Output 1

533231
'''

a = int(input())
ls = []

for i in range (a):
    ls.append(int(input()))
            
ls1 = []
ls2 = []
for i in ls:
    if (i < 10):
        ls1.append(i)
    else:
        ls2.append(i)

ls1.sort(reverse=True)
for i in ls1:
    print(i, end='')
    
ls2.sort(reverse=True)
for i in ls2:
    print(i, end='')
