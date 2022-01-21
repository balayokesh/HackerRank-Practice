"""
Given a list of numbers, write a python function to exchange the first n/2 elements of a list with the last n/2 elements. The function should return the new list. n represents the number of elements in the list. Assume that it will always be even.

Input Format

line 1=> list of items separated by spaces

Constraints

line1 -> a single line string

Output Format

New arranged list

Sample Input 0

1 22 3 4 5 6 7 8 19 10
Sample Output 0

[10, 19, 8, 7, 6, 1, 22, 3, 4, 5]
"""

a = list(input().split())

a_int = []

for i in a:
    a_int.append(int(i))
    
mid = len(a_int)//2
    
a_final1 = a_int[-1:mid-1:-1]
a_final2 = a_int[:mid]

a_final1.extend(a_final2)

print(a_final1)
