#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int *arr2 = (int*) malloc(num * sizeof(int));
    for (int i=1; i<=num; i++) {
        arr2[i-1] = arr[num - i];
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr2 + i)); 
    return 0;
}
