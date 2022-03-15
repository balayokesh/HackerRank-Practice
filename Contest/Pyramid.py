'''
Write a program to print pyramid pattern

Input Format

n => integer , indicate number of rows

Constraints

na

Output Format

Pyramid pattern

Sample Input 0

4
Sample Output 0

   *
  * *
 * * * 
* * * *
Sample Input 1

3
Sample Output 1

  *
 * *
* * *
'''

a = int(input())
char = a - 1
temp = 0
for i in range (a):
    for j in range(a):
        if (j == char):
            temp = i+1
            for i in range (temp):
                print('*', end=' ')
            char -= 1
            break
        else:
            print(" ", end='')
    print()
