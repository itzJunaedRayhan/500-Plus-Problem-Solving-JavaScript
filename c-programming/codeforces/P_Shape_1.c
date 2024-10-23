#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int k = n;
    for (int i = 0; i < n; i++) {
        for (int i = k; i > 0; i--) printf("*");
        printf("\n");
        k--;
    }
    return 0;
}