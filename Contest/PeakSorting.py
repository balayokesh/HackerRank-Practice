'''
Given an array in such a way that the elements stored in array are in some order then after reaching to a highest peak element any elements followed by peak element stored are in decreasing order. Find the sorted sequence Note: A[i] != A[i+1]

Input Format

n=>number of elements in an array a[n]=> array of n elements.

Constraints

all are non zero positive

Output Format

sorted sequence

Sample Input 0

11
1
2
3
4
5
6
17
11
12
15
10
Sample Output 0

1 2 3 4 5 6 17 15 12 11 10
'''

a = int(input())
ls = []

for i in range (a):
    ls.append(int(input()))
    
flag = max(ls)
flag_index = ls.index(flag)

for i in range (flag_index):
    print (ls[i], end=' ')

sub_arr = ls[flag_index:]
sub_arr.sort(reverse=True)
for i in sub_arr:
    print (i, end=' ')
