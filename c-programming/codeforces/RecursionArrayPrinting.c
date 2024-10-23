#include<stdio.h>

void fun (int a [], int n, int i) {
    if (i == n) return;
    printf("%d\n", a[i] * 10);
    fun(a, n, i+1);
}

int main () {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);

    fun(arr, N, 0);

    return 0;
}