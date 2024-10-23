#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int k = 1, s = n - 1;

    for (int i = 0; i < n; i++) {
        for (int j = s; j > 0; j--) printf(" ");
        for (int j = 0; j < k; j++) printf("*");
        
        k = k + 2;
        s--;
        printf("\n");
    }
    return 0;
}