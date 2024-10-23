#include<stdio.h>
int main () {
    int N, X1, X2;
    scanf("%d", &N);    // 5

    int tiger = 0;
    int pathan = 0;
    int draw = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d%d", &X1, &X2);
        if (X1 > X2) {
            tiger++;
        }else if (X1 == X2) {
            draw++;
        }
         else {
            pathan++;
        }
    }

 
    if (tiger > pathan) {
        printf("Tiger\n");
    } else if (pathan > tiger) {
        printf("Pathan\n");
    } else {
        printf("Draw");
    }


    return 0;
}