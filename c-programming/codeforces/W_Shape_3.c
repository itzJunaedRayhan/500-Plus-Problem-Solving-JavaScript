#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int s = n;
    int k = 1;

    for (int i = 0; i < n * 2; i++) {
        for (int j = s; j > 1; j--) printf(" ");
        for (int j = 0; j < k; j++) printf("*");
    
        if (i <= n-2) {
            s--;
            k = k + 2;
        } 
        if ( i > n-1) {
            s++;
            k = k - 2;
        }
        printf("\n");
    }

    return 0;
}