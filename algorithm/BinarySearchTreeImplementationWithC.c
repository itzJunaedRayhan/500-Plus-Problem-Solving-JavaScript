#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) 
            swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int x;
    scanf("%d", &x);

    int l = 0, r = n - 1;
    int findIndex = -1;
    bubbleSort(arr, n);
    while (l <= r) {
        int mid_index = (l + r) / 2;
        if (arr[mid_index] == x) {
            findIndex = mid_index;
            break;
        }
        if (x > arr[mid_index]) l = mid_index + 1;
        else r = mid_index - 1;
    }
    printf("%d", findIndex);


    /*
    Input:
    7
    64 34 25 12 22 11 90
    23

    Output: Not Found
    */

    return 0;
}