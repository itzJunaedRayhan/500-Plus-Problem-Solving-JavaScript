#include<stdio.h>
#include<limits.h>

int main () {
    int N, max = INT_MIN;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < N; i++) if (arr[i] > max) max = arr[i];
    for (int i = 0; i < N; i++) printf("%d ", max - arr[i]);

    return 0;
}