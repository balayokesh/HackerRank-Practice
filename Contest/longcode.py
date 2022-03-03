'''
A long code is created with a combination of integer input n . the long code sequence is a jumbled sequence as first part as sum of digits of a number , second part is reverse of the given 3 digit number , third part is sum of last digit of original number and last digit of the reverse number.

Input Format

n as integer

Constraints

na

Output Format

long code formed by three parts of calculation

Sample Input 0

123
Sample Output 0

63214
Sample Input 1

221
Sample Output 1

51223
'''

a = int(input())
a_cpy = a
a_rev = 0
a_sum = 0

while (a_cpy != 0):
    rem = a_cpy % 10
    a_sum += rem
    a_rev = a_rev * 10 + rem
    a_cpy //= 10
    
last = (a % 10) + (a_rev % 10)
    
print("{}{}{}".format(a_sum, a_rev, last))
    
