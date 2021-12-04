/*
A race is going to be conducted between a rabbit , tortoice and snail. The speed of rabit is faster than tortoise , tortoise is faster than snail. To have an equal oppritunity the lion king "Sherkan" has set a different finishing check points for different animals. which animal croses the check point first will win the race. All animals start from same point .

The distance for checkpoint of rabit, tortoise ,snail are given along with the speed of each animal .

tell me who won the race.

Input Format

d1= end point in miles for rabbit from start
d2= end point in miles for tortoise from start
d3= end point in miles for snail from start

s1-rabit speed in miles

s2-tortise speed in miles
s3- snail speed in miles.
Constraints

all are positive inputs

Output Format

Snail wins or rabbit wins or tortoise wins

Sample Input 0

10
4
3
5
4
1
Sample Output 0

Tortoise wins the race
Sample Input 1

15
6
2
5
3
2
Sample Output 1

Snail wins the race
Sample Input 2

10
8
3
10
4
1
Sample Output 2

Rabbit wins the race
Sample Input 3

10
-8
3
10
4
1
Sample Output 3

Invalid input , speed or distance cannot be negative
Sample Input 4

10
8
3
10
8
3
Sample Output 4

It's a draw , No one loose neither wins
*/

#include <stdio.h>

int main() {
    int d1, d2, d3, s1, s2, s3;
    scanf ("%d %d %d %d %d %d", &d1, &d2, &d3, &s1, &s2, &s3);
    
    if (d1 < 1 || d2 < 1 || d3 < 1 || s1 < 0 || s2 < 0 || s3 < 0) {
        printf("Invalid input , speed or distance cannot be negative");
        return 0;
    }
    
    int t1 = d1 / s1;
    int t2 = d2 / s2;
    int t3 = d3 / s3;
    
    if (t1 == t2 && t2 == t3 && t3 == t1)
        printf("It's a draw , No one loose neither wins");
    else if (t1 < t2 && t1 < t3)
        printf("Rabbit wins the race");
    else if (t2 < t1 && t2 < t3)
        printf("Tortoise wins the race");
    else if (t3 < t1 && t3 < t2) 
        printf("Snail wins the race");
    
    return 0;
}