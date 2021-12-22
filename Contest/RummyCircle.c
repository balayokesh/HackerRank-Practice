/*
Ranjith is playing a game on rummy circle. It is played with 7 cards. Any one who plays the game will be anounced as winner on any of the following conditions.

All cards are of same color and numbered from 1 to 7
He has 7 cards as one king , one queen, one jack and remaining cards are numbered from 10,9,8,7
Three cards of same number with same or different symbols but same colour, remaining 4 cards are any with consecutive numbers between 1 to 10.
Codes for cards

B: Black
R: Red
K: KING
Q: Queen
J: Jack
S: Spade
D: Diamond
C: Clavour
Input Format

A sequence of card codes

Constraints

All are strings

Output Format

Win or loose

Sample Input 0

BSK
BDQ
RCJ
RD10
RD8
RS9
BC7
Sample Output 0

Win
Sample Input 1

BSK
BDQ
RCQ
RD2
RD1
RD3
BS4
Sample Output 1

Loose
*/

#include <stdio.h>

int main () {
    char c1;
    char n1;
    int i1;
    
    char c2;
    char n2;
    int i2;
    
    char c3;
    char n3;
    int i3;
    
    char c4;
    char n4;
    int i4;
    
    char c5;
    char n5;
    int i5;
    
    char c6;
    char n6;
    int i6;
    
    char c7;
    char n7;
    int i7;
    
    scanf ("%c %c %d\n", &c1, &n1, &i1);
    scanf ("%c %c %d\n", &c2, &n2, &i2);
    scanf ("%c %c %d\n", &c3, &n3, &i3);
    scanf ("%c %c %d\n", &c4, &n4, &i4);
    scanf ("%c %c %d\n", &c5, &n5, &i5);
    scanf ("%c %c %d\n", &c6, &n6, &i6);
    scanf ("%c %c %d\n", &c7, &n7, &i7);
    
    // printf ("%c %c %d", c1, n1, i1);
    // printf ("%c %c %d", c2, n2, i2);
    
    // condition 1
    if ((c1 == 'B' && c2 == 'B' && c3 == 'B' && c4 == 'B' && c5 == 'B' && c6 == 'B' && c7 == 'B') || c1 == 'R' && c2 == 'R' && c3 == 'R' && c4 == 'R' && c5 == 'R' && c6 == 'R' && c7 == 'R')
        printf ("Win");
    else
        printf ("Loose");
    return 0;
}
