"""
Write a Python function which generates and returns a dictionary where the keys are numbers between 1 and n (both inclusive) and the values are square of keys. Example: Sample Input Expected Output 10 {1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64, 9: 81, 10: 100}

Input Format

n=> numeric input

Constraints

n>=0

Output Format

A dictioanry with {key:value}

Sample Input 0

10
Sample Output 0

{1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64, 9: 81, 10: 100}
"""

a = int(input())
dict = {}
print("{", end="")
for i in range (1, a+1):
    if (i == a):
        print ("{}: {}".format(i, i*i), end="")
    else:
        print ("{}: {},".format(i, i*i), end=" ")
print("}")    
