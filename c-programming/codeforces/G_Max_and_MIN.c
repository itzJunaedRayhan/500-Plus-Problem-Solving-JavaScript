#include<stdio.h>

void FindMinAndMax (int arr[], int n) {
    int min, max;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i]   = arr[j];
                arr[j]   = temp;
            }
        };
    printf("%d %d", arr[0], arr[n-1]);
}

int main () {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    FindMinAndMax(arr, n);
    return 0;
}