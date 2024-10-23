#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    int K;

    scanf("%d", &N);
    scanf("%d", &K);

    //  For Loop to Print N and K index:
    for (int i = 0; i < K; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d ", j);
        } 
        printf("\n");
    }

    return 0;
}