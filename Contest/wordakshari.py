"""
Antakshari is a popular parlor game played in India. Many word games are similar to antakshari. One such game is wordakshari. The game can be played by two or more people. The first player has to recite a word. The last letter of the word is then used by the next player to recite another word starting with that letter. The winner or winning team is decided by a process of elimination. The person or the team that cannot come up with a word with the right consonant is eliminated. The following rules need to be followed while playing this game. (ii) All other words have to begin with the last letter of the previous word (iii) No words can be repeated. write a program to print the wordakshari chain.

Input Format
Input consists of n+1 lines.
The first n lines contain strings corresponding to the words in the chain.
The last line of input contains the string #### to mark the end of input.

Constraints
strings

Output Format
wordakshari chain

Sample Input 0
word
diameter
run
nest
high
####

Sample Output 0
word
diameter
run
nest
"""

# Solution 1
count = 0
while (1):
    a = input()
    count += 1
    if a == "####":
        break
    else:
        if (count > 1):
            if (a[0] == prev[-1]):
                print(a)
                
        else:
            print(a)
    prev = a;
    
 # Solution 2
ls = []

while (1):
    str = input()
    if (str == "####"):
        break
    else:
        ls.append(str)
    
count = 0
for i in ls:
    if (count < 1):
        print(i)
    else:
        if (i[0] == ls[count - 1][-1]):
            print(i)
    count += 1
