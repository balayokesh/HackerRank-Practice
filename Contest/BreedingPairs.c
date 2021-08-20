#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int negative=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            negative++;
        }
    }
    int pairs=0;
    if(negative!=0){
        printf("Invalid input");
    }
    else{
        int k=0;
        int v=0;
        for(int i=0;i<n;i++){
           if(arr[i]%2==0 && arr[i]>0){
              k++;
           }
           else if(arr[i]>0 && arr[i]%2!=0){
              v++;
            }
        } 
        if(k==v || k<v){
          pairs=k;
        }
        else{
           pairs=v;
        }
        printf("%d pairs",pairs);
        
     }        
     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
