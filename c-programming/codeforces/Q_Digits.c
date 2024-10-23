#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        int N;
        scanf("%d", &N);
        do {
            printf("%d ", N % 10);
            N = N / 10;
        }
        while(N != 0);
        printf("\n");
    }
    return 0;
}