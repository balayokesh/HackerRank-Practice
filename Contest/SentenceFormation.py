# Write a python function to generate and return the list of all possible sentences created from the given lists of Subject, Verb and Object.

# Input Format

# Line 1=> List of subjects
# Line 2=> List of verbs
# Line 3=> List of Nouns
# Constraints

# Line 1=> List of subjects
# Line 2=> List of verbs
# Line 3=> List of Nouns
# Output Format

# Different combination of sentences

# Sample Input 0

# "I","You"
# "Play","Love"
# "Hockey","Football"
# Sample Output 0

# I Play Hockey
# I Play Football
# I Love Hockey
# I Love Football
# You Play Hockey
# You Play Football
# You Love Hockey
# You Love Football

a = list(input().split(","))
b = list(input().split(","))
c = list(input().split(","))

for s in a:
    for v in b:
        for n in c:
            print("{} {} {}".format(s[1:-1], v[1:-1], n[1:-1]))
