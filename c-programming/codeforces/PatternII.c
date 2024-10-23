#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int k = n-1;
    int s = 0;
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j < s; j++) {
            printf(" ");
        }
        for (int j = 0; j < n+k; j++) {
            printf("*");
        }
        printf("\n");
        k-=2;
        s++;
    }
    return 0;
}