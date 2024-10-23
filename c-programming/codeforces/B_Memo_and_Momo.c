#include<stdio.h>
int main () {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a % c == 0 && b % c == 0) {
        printf("Both");
    } else if (a % c == 0 && b % c != 0) {
        printf("Memo");
    } else if (a % c != 0 && b % c == 0) {
        printf("Momo");
    } else {
        printf("No One");
    }

    return 0;
}