#include<stdio.h>

void PrintNumber (int n) {
    if (n == 0) return;
    PrintNumber(n - 1);
    printf("%d\n", n);
}

int main () {
    int N;
    scanf("%d", &N);
    PrintNumber(N);
    return 0;
}