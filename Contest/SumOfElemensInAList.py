"""
Given a list of integers and a number. find and return the sum of the elements of the list.

Note: Don't add the given number and also the numbers present before and after the given number in the list .

Input Format

line 1=> 'n' number elements in a list/array a[0...n]=> elements of the list last line=> reference element 'x'

Constraints

n,x,a[0...n] are numeric numbers.

Output Format

Sum of items in a list except the numbers present before and after the given number in the list .

Sample Input 0

4
1
2
3
4 
2
Sample Output 0

4
Sample Input 1

5
1
2
3
4
5
2
Sample Output 1

9
Sample Input 2

4
1
2
3
4 
5
Sample Output 2

10
Sample Input 3

8
1
2
3
4
5
6
2
8
2
Sample Output 3

9
"""

a = int(input())
ls = []

for i in range(a):
    ls.append(int(input()))
    
ref = int(input())

sum = 0
if ls[0] != ref and ls[1] != ref:
    sum += ls[0]
if ls[a-1] != ref and ls[a-2] != ref:
    sum += ls[a-1]    

for i in range (1,a-1):
    if (ls[i] != ref and ls[i-1] != ref and ls[i+1] != ref):
        sum += ls[i]

print(sum)
