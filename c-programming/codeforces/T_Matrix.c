#include<stdio.h>
#include<stdlib.h>

int main () {
    int N;
    scanf("%d", &N);
    int arr[N][N];
    for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) scanf("%d", &arr[i][j]);

    int x = 0, y = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) x = x + arr[i][j];
            if (i+j == N-1) y = y + arr[i][j];
        }
    }

    printf("%d", abs(x-y)); 

    return 0;
}