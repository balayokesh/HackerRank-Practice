/*
There are 'n' number of pirates in an island , They found an treasure box with some 'x' number of gold coins. They decided to share them among themselves in the order of priority.

Captain was the first person to get his 40% of gold coins from the overall treasure.

follwed by next person who gets 20% of gold coins remaining after sharing with captaing

follwoed by next person who gets 20% of gold coins remaining after sharing with captain and the first pirate.

like in this scenario all the pirates one by one get their share from the remaining coins shared by previous persons.

if after sharing any left , they are donated to mermaid of sea.

print the set of gold coins that each pirates will get starting from captain.

Input Format

line 1=>x=> number of gold coins line 2=>n=> number of pirates.

Constraints

x>=0 n>=0

Output Format

print the gold coins that each pirate got and donated to mermaid

Sample Input 0

100
4
Sample Output 0

40
12
9
7
Donated to mermaid:32
*/

#include <stdio.h>

int main()
{
    int coins;
    int n;
    scanf ("%d\n%d", &coins, &n);
    
    int forCaptain = (int) coins * 0.4;
    printf ("%d\n", forCaptain);
    coins -= forCaptain;
    
    int forPirate;
    while (--n) {
        forPirate = (int) coins * 0.2;
        printf ("%d\n", forPirate);
        coins -= forPirate;
    }
    printf ("Donated to mermaid:%d", coins);
    return 0;
}
