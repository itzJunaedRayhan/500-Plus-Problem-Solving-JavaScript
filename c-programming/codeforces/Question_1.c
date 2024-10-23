#include<stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int s = N - 1, k = 1;

    for (int i = 1; i <= (2 * N)-1; i++) {
        for (int j = 1; j <= s; j++) printf(" ");
        for (int j = 1; j <= k; j++) printf("%d", j);
        if (i <= N-1) {
            s--;
            k = k + 2;
        }else {
            s++;
            k = k - 2;
        }
        printf("\n");
    }
    return 0;
}