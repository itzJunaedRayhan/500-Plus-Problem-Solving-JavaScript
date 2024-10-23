#include<stdio.h>

int FindFact (int n) {
    if (n == 0) return 1;

    int x = FindFact(n-1);
    return n * x;
}

int main () {
    int N;
    scanf("%d", &N);
    printf("%d", FindFact(N));
    return 0;
}