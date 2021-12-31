/*
Print the given word in 'x' pattern

Input Format

str=>word

Constraints

str=>string

Output Format

'x' pattern of the word

Sample Input 0

hello
Sample Output 0

h   o
 e l
  l 
 e l
h   o
Sample Input 1

rome
Sample Output 1

r  e
 om
r  e
*/

#include <stdio.h>

int main()
{
    char str[100];
    gets(str);
    int indicator1 = 0;
    int indicator2 = strlen(str) - 1;
    for (int i=0; i<strlen(str); i++) {
        for (int j=0; j<strlen(str); j++) {
            
            if ((strlen(str) % 2 == 0) && (indicator1 == strlen(str)/2))
                continue;
            
            if (j == indicator1 || j == indicator2)
                printf ("%c", str[j]);
            else
                printf (" ");
        }
        indicator1++;
        indicator2--;
        if ((strlen(str) % 2 == 0) && (indicator1 == strlen(str)/2))
            continue;
        else
            printf ("\n");
    }
    return 0;
}
