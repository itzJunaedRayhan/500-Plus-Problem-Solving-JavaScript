#include<stdio.h>  

int count_before_zero(int nums[],int n){   
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) break;
        else count++;
    };
    return count;
}  
    
int main(){      
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
    printf("%d", count_before_zero(arr, N));
    return 0;  
}    