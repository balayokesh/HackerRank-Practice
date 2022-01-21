"""
Write a program which accepts three numbers and returns True if

one of the three numbers is "close" to any one of the other numbers (differing from a number by at most 1), and
Number that is left out is "far", differing from both other values by 2 or more.
Return false if the above mentioned conditions are not satisfied.

Input Format

line 1->x line 2->y line 3->z

Constraints

(x,y,z>)=0

Output Format

True or False

Sample Input 0

4
1
3
Sample Output 0

True
Sample Input 1

2
4 
6
Sample Output 1

False
Sample Input 2

1
2
3
Sample Output 2

True
"""

a = int(input())
b = int(input())
c = int(input())

condition1 = (a - b == 1 or b - a == 1) and (a - c > 1 or c - a > 1)
condition2 = (a - c == 1 or c - a == 1) and (a - b > 1 or c - b > 1)
condition3 = (c - b == 1 or c - a == 1) and (a - b > 1 or b - a > 1)

if condition1 or condition2 or condition3:
    print(True)
else:
    print(False)
    
