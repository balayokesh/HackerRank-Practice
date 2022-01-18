"""
Write a python function which accepts a sentence and returns a list in which first value is the count of upper case letters and second value is the count of lower case letters in the sentence. Ignore spaces, numbers and other special characters if any.

Input Format

a line of sendecnce

Constraints

a line of sendecnce

Output Format

A list in which first value is the count of upper case letters and second value is the count of lower case letters in the sentence. Ignore spaces, numbers and other special characters if any.

Sample Input 0

Hello world!
Sample Output 0

[1, 9]
Sample Input 1

Welcome to Mysore
Sample Output 1

[2, 13]
"""

a = input()
lower = 0
upper = 0
list = []

for letter in a:
    if ord(letter) > 96 and ord(letter) < 123:
        lower = lower + 1
    elif ord(letter) > 64 and ord(letter) < 91:
        upper = upper + 1
        
list.append(upper)
list.append(lower)

print(list)
