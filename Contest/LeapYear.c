#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    
    int year = input % 10000;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0 )
                printf ("She was born on Leap year");
            else 
                printf ("She was born on non a leap year");
                return 0;
        }
        else {
            printf ("She was born on Leap year");
        }
    }
    else {
        printf ("She was born on non a Leap year");
        return 0;
    }

    input = input / 10000;
    int month = input % 100;

    if (month == 2) {
        printf (", leap month");
    }
    else {
        printf(" non leap month");
    }

    return 0;
}
