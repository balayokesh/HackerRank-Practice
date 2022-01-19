"""
Write a python function which accepts a list of 'n' numbers and returns true, if x,y,z appears in sequence in the list. Otherwise, it should return false.

Input Format

line 1=> n - size of the list

next 'n' lines => items of a list

last three lines => x,y,z the elements you have to find whether it is availbele in the list as a sequence.
Constraints

line 1=> n - size of the list
next 'n' lines => items of a list
last three lines => x,y,z the elements you have to find whether it is availbele in the list as a sequence.
Output Format

Boolean output "True" or "False"

Sample Input 0

5
1
2
3
4
5
2
3
4
Sample Output 0

True
Sample Input 1

5
1
2
3
4
5
2
3
5
Sample Output 1

False
"""

n = int(input())
ls = []

for i in range (n):
    ls.append(int(input()))
    

x = int(input())
y = int(input())
z = int(input())
    
if x in ls and y in ls and z in ls:
    index_x = ls.index(x)
    if ([x, y, z] == ls[index_x:index_x+3]):
        print(True)
    else:
        print(False)
else:
    print(False)
