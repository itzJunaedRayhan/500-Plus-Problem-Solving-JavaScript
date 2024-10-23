#include<stdio.h>

long long int FindFact (int n) {
    if (n == 0) {
        return 1;
    }
    long long int x = FindFact(n - 1);
    return n * x;
}

int main () {
    long long int n;
    scanf("%lld", &n);
    printf("%lld", FindFact(n));
    return 0;
}