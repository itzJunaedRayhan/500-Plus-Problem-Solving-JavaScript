#include<stdio.h>

void PrintEvenNums (int arr[], int i, int n) {
    if (n % 2 == 0) {
        if (i == n) return;
    } else {
        if (i > n) return;
    }
    
    PrintEvenNums(arr, i + 2, n);
    printf("%d ", arr[i]);
}

int main () {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
    PrintEvenNums(arr, 0, N);
    return 0;
}