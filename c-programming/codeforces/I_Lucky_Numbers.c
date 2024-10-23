#include<stdio.h>
int main () {
    int N, a, b;
    scanf ("%d", &N);

    a = N % 10;
    b = N / 10;
    b = b % 10;

    if ((a % b == 0) || (b % a == 0)) printf("YES\n");
    else printf("NO\n");

    return 0;
}