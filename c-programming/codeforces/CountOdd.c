#include<stdio.h>

void CountOdd (int nums[], int n) {
    int odd = 0;
    for (int i = 0; i < n; i++)
    if (nums[i] % 2 != 0) odd++;
    printf("%d", odd);
}

int main () {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    CountOdd(arr, n);
    return 0;
}