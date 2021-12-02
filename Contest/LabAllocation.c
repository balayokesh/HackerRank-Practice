/*
There are 3 labs in the CSE department. The labs are L1, L2, and L3 with a seating capacity of x, y, and z respectively. A single lab needs to be allocated to a class of 'n' students. The labs need to be utilized to the maximum i.e the number of systems used should not be minimal. Which lab needs to be allocated to this class?

Input Format
Input consists of 4 integers
The first input denotes 'x'
The second input denotes 'y'
The third input denotes 'z'
The fourth input denotes 'n'

Constraints
all are integers

Output Format
Print the lab which is suitable for 'n' number of students

Sample Input 0
30
40
20
15
Sample Output 0
L1
Sample Input 1
30
40
20
35
Sample Output 1
L2
*/

#include <stdio.h>

int main() {
    int l1, l2, l3, l4;
    scanf("%d %d %d %d", &l1, &l2, &l3, &l4);
    if (l1 < l4) 
        l1 = 1000;  
    if (l2 < l4) {
        l2 = 1000;
    if (l3 < l4)
        l3 = 1000;
    
    if (l1 < l2 && l1 < l3)
        printf("L1");
    else if (l2 < l3 && l2 < l1)
        printf("L2");
    else if (l3 < l2 && l3 < l1)
        printf("L3");
    
    return 0;
}
