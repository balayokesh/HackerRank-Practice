"""
Given two numbers, write a python function which returns true if first number is a seed of second number. Otherwise it returns false. A number X is said to be a seed of number Y, if multiplying X by its each digit equates to Y For example, 123 is a seed of 738 as 123*1*2*3 = 738.

Input Format

x=numeric input y=numeric input

Constraints

x,y>=0

Output Format

True or False

Sample Input 0

123
738
Sample Output 0

True
Sample Input 1

45
1000
Sample Output 1

False
"""

a = int(input())
b = int(input())

res = a
rem = 0

while a != 0:
    rem = a % 10
    res *= rem
    a //= 10

if res == b:
    print(True)
else:
    print(False)
