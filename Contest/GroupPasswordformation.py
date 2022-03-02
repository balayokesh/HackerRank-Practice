'''
There are 'n' set of members in a team you are going to form a group password for the entire team from the information given (Employee name : EmployeeId.).All the details of the 'n' employee are given as a single line of information separated by comma

Rules for Password making:

The password will be single the character in the name of the employee at the index k where k is the digit that is present in the employee number that is nearest and less than or equal to the length of the employee name.
If such 'k' never exist then passoword char is 'x'.
Repeate the step 1 and 2 for each detail of the employee by concatinating each charctaer to the group password.
Input Format

A single string that that has sub strings separated by commas. • employee name and employee number were separated by colon

Constraints

string input

Output Format

A single string formed by concatenating the of passwords of all employees.

Sample Input 0

Robert:36787,Tina:68721.Jo:56389
Sample Output 0

tix
Explanation 0

Length of Robert is 6 and 6 is present in employee number of Robert 36787. so return the alphabet at position 6 that is 't'.
Length of Tina is 4 and 4 is not present in the 68721 so select the number which is max and less than the length of Tina so select 2 return the alphabet at position 2 that is ‘i’
Length of Jo is 2 it is not present in 56389 and there is not present any number which is less than 2 so return 'x'
Sample Input 1

Robert:35787,Tina:68721.Jo:56389
Sample Output 1

rix
'''

inp = input()
inp = inp.replace('.', ',')
inp = inp.split(',')

def in_num_arr(i):
    for x in num_arr:
        if (x == str(i)):
            return 1
    return 0

for i in range (len(inp)):
    ls = inp[i].split(':')
    size = len(ls[0])
    num_arr = list(ls[1])
    
    i = 0
    sizeCpy = size
    while (True):
        if (i >= sizeCpy):
            print('x', end='')
            break
        if (in_num_arr(size)):
            print(ls[0][size-1], end='')
            break
        else:
            size -= 1
            i += 1
    else:
        print("{} not present in num_arr".format(size))
