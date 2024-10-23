#include<stdio.h>

long long int SumOfNums (int arr[], int i, int n, int sum) {
    if (i == n) return sum;
    return SumOfNums(arr, i+1, n, sum) + arr[i];
}

int main () {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
    printf("%lld", SumOfNums(arr, 0, N, 0));
    return 0;
}