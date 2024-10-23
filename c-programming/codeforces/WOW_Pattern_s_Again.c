#include<stdio.h>
int main () {
    int N;  //  3
    scanf("%d", &N);

    int k = 1;
    int s = N-1;

    for (int i = 0; i < N; i++) {
        for (int j = s; j > 0; j--) {
            printf(" ");
        }
        for (int j = 0; j < k; j++) {
            if (i % 2 == 0) {
                printf("^");
            }else{
                printf("*");
            }
        }

        s--;
        k= k+2;
        printf("\n");
    }
    
    return 0;
}