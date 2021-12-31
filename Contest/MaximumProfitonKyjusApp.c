/*
You are an mobile app seller you set a base price 'x' for your app's selling cost and that base price is also your expenses for app development. Your app was so succesfull in the market there are 'n' potential customers where each wants to buy your app for some amount of values.

Here below you recieved the set of money values each potential customer wants to buy.

Find the total revenue u earned if u sell all your app to all customers greater or equal to base price.

Input Format

b=> base price of app. n=> number of potential customers. a[n]=> prices offered by each customer

Constraints

all positive values

Output Format

profit in numbers

Sample Input 0

50
3
50
51
52
Sample Output 0

103
Sample Input 1

50
3
49
51
52
Sample Output 1

53
*/

#include <stdio.h>

int main()
{
    int cp;
    scanf ("%d", &cp);
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] >= cp)
            sum += arr[i];
    }
    printf ("%d", sum - cp);
    
    return 0;
}
