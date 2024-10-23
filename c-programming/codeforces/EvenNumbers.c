#include<stdio.h>
#include <stdbool.h> 

int main () {
    int N;
    scanf("%d", &N);

    bool x = false;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            x = true;
        }
    }

    if (!x) {
        printf("-1");
    }

    return 0;
}