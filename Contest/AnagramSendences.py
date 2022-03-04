'''
A set of two lines of sendence is given . You have to find whether both the sendences are made of same number of characters with same set of frequency.

Input Format

line 1=> sendence 1 line 2=> sendence 2

Constraints

string of sendences

Output Format

"Anagram sendences" or "Not an anagram sendences"

Sample Input 0

my name is woman hitler
my name is mother in law
Sample Output 0

Anagram sendences
Sample Input 1

hai hello
hia hllao
Sample Output 1

Not an Anagram sendences
'''

str1 = input()
str2 = input()

ls1 = list(str1)
ls1.sort()
for i in ls1:
    if (i == " "):
        ls1.remove(i)
    
ls2 = list(str2)
ls2.sort()
for i in ls2:
    if (i == " "):
        ls2.remove(i)

if (ls1 == ls2):
    print("Anagram sendences")
else:
    print("Not an Anagram sendences")
