#include<stdio.h>

int main () {
    int N, M;
    scanf("%d%d", &N, &M);
    int arr[N][M];

    for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++) scanf("%d", &arr[i][j]);

    int x, flag = 0;
    scanf("%d", &x);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
        if (arr[i][j] == x) flag = 1;
    }
    
    if (flag) printf("will not take number");
    else printf("will take number");

    return 0;
}