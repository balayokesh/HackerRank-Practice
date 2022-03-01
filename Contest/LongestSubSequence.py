'''
An array of inputs are given find the longest sub sequence of the array with repeated element. Print the element that is repeated continuously in the longest sub sequence

Input Format

list of inputs.

Constraints

list of inputs

Output Format

element that is repeated consequtively in longest sub sequence

Sample Input 0

12 1 1 1 1 2 2 2 2 23 34 34 45 45
Sample Output 0

1
2
Sample Input 1

12 12 1 1 1 1 12 12 3 4 4 4 2 2 2
Sample Output 1

1
'''

ls = list((input().split()))
for i in range(len(ls)):
    ls[i] = int(ls[i])
    
count_ls = [ls.count(x) for x in ls]
max_count = max(count_ls)

long_ls = [x for x in ls if (ls.count(x)==max_count)]
final_ls = []
for x in long_ls:
    if x not in final_ls:
        final_ls.append(x)
        
for x in final_ls:
    print(x)
