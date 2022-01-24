"""
x1y1+x2y2+...+xnyn. Suppose you are allowed to permute the coordinates of each vector as you wish. Choose two permutations such that the scalar product of your two new vectors is the smallest possible, and output that minimum scalar product

Input Format

The first line contains integer number n.
The next two lines contain n integers each, giving the coordinates of v1 and v2 respectively.
Constraints

all are positive

Output Format

The output consists of a single integer Y, that corresponds to the minimum scalar product of all permutations of the two given vectors

Sample Input 0

3
1 3 5
2 4 1
Sample Output 0

15
"""

a = int(input())

ls1 = input().split(" ")
ls2 = input().split(" ")

for i in range (len(ls1)):
    ls1[i] = int(ls1[i])
    
for i in range (len(ls2)):
    ls2[i] = int(ls2[i])

ls1.sort()
ls2.sort(reverse = True)

out = 0
for i in range (len(ls1)):
    out += ls1[i] * ls2[i]
    
print (out)
