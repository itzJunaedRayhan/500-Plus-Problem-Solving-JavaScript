#include<stdio.h>

void PrintText (int n) {
    if (n == 0) return;
    printf("I love Recursion\n");
    PrintText(n - 1);
}

int main () {
    int N;
    scanf("%d", &N);
    PrintText(N);
    return 0;
}