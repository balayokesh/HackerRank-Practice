"""
Write a python function to create and return a new dictionary from the given dictionary(item:price) with elements having price more than X.

Input Format

LINE 1:'N'- NUMBER OF ITEMS
NEXT 'N' LINES ARE SET OF KEY PAIRS ITEM:PRICE
last line : X => CRITERIA FOR FILTERING
Constraints

N ,X ARE INTEGERS

Output Format

New dictionary with filtered item pairs

Sample Input 0

5
ACME:45.23
AAPL:612.78
IBM:205.55
HPQ:37.20
FB:10.75
200
Sample Output 0

{'AAPL': 612.78, 'IBM': 205.55}
"""

a = int(input())
my_dict = {}
d_out = {}

for i in range(a):
    x = input().split(":")
    my_dict[x[0]] = x[1]
    
amt = int(input())
    
for keys in my_dict:
    if (float(my_dict[keys]) > amt):
        d_out[keys] = float(my_dict[keys])
        
print(d_out)
