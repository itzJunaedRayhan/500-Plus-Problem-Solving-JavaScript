#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);

    int k = n-1;

    for (int i = n-1; i >= 0; i--) {
        for (int j = k; j >= 0; j--) printf("*");
        printf("\n");
        k--;
    }

    return 0;
}