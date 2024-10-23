#include<stdio.h>

void PrintDigit (int n) {
    if (n == 0) return;
    int x = n % 10;
    PrintDigit(n / 10);
    printf("%d ", x);
}

int main () {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        PrintDigit(N);
        if (N == 0) printf("0");
        printf("\n");
    }
    return 0;
}