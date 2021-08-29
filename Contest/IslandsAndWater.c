#include <stdio.h>

int main () {
    int islands = 0;
    int arr[5][5];
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf ("%d", &arr[i][j]);
        }
    }
    
    for (int i=1; i<5; i++) {
        for (int j=1; j<5; j++) {
            if (arr[i][j] == 1) {
                if (arr[i-1][j-1] == 0 && arr[i-1][j] == 0 && arr[i][j-1] == 0 && arr[i+1][j+1] == 0 && arr[i+1][j] == 0 && arr[i][j+1] == 0 && arr[i-1][j+1] == 0 && arr[i+1][j-1] == 0) {
                    islands++;     
                }
            }
        }
    }
    
    printf("No of islands : %d", islands);
    return 0;
}
