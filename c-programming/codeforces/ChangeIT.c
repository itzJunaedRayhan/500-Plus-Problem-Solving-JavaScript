#include<stdio.h>

void ChangeIt(int nums[], int n) {
    nums[n-1] = 100;
    for (int i = 0; i < n; i++) printf("%d ", nums[i]);
}

int main () {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    //  Change the array's last index value with 100:
    ChangeIt(arr, n);

    printf("\n\n");

    //  Main Array after value change of last index:
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}