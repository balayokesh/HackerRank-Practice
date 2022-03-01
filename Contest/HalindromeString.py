'''
A Given a string S. Let us divide S into two equal parts S1 and 52. Sis called a halindrome if at least any one of the following conditions satisfy: 1. S is a palindrome and length of S >=2. 2. S1 is a halindrome.(The sub part is an plaindrome) 3. S2 ia halindrome.(The sub part is an plaindrome) In the case of an odd length string, the middle element is not present in both s1 and s2. If index of middle element is m, then. S1 = S [0. m-1) and s2 =s[m+1,|S|-1).

Input Format

Line 1 : Number of test cases 'n' Next 'n' lines => List of strings

Constraints

n!=0

Output Format

1 on Halindrome , 0 on not a Halindrome

Sample Input 0

3
arun
malayalam
omomos
Sample Output 0

0
1
1
Explanation 0

arun is not a palindrome, s1=ar s2=un both are not a palindrome malayalam is a plaindrome , so '1' omomos is not a palindrome , but s1=omo is a palindrome so '1'

Sample Input 1

2
liril
lilly
Sample Output 1

1
0
'''

a = int(input())

for i in range (a):
    s = input()
    half = len(s) // 2
    if (len(s) % 2 == 0):
        s1 = s[:half]
        s2 = s[half:]
    else:
        s1 = s[:half]
        s2 = s[half+1:]
        
    if (s1 == s2[::-1]):
        print(1)
    elif (s1 == s1[::-1]):
        print (1)
    elif (s2 == s2[::-1]):
        print(1)
    else:
        print(0)
