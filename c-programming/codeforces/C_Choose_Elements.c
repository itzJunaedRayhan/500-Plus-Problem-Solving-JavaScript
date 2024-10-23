#include<stdio.h>

int main () {
    int N, K;
    scanf("%d %d", &N, &K);
    long long int arr[N];

    for (int i = 0; i < N; i++) scanf("%lld", &arr[i]);

    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (arr[j] > arr[i]) {
                int temp = arr[i];
                arr[i]   = arr[j];
                arr[j]   = temp;
            }
        }
    }

    long long int sum = 0;
    for (int i = 0; i < K; i++) {
        if (arr[i] > 0) sum += arr[i];
    }  
    printf("%lld", sum);

    return 0;
}