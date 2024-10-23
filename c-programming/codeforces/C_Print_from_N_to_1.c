#include<stdio.h>

void PrintNumber (int n) {
    if (n == 0) return; 
    if (n == 1) printf("%d", n);
    else printf("%d ", n);
    PrintNumber(n - 1);
}

int main () {
    int N;
    scanf("%d", &N);
    PrintNumber(N);
    return 0;
}