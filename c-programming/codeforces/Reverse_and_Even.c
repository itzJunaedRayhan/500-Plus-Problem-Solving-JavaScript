#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];

    //   Store Values in Array:
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    //  Getting The Even Index:
    if (N % 2 == 0) N -= 2;
    else N -= 1;

    //  Print The Values in Reverse Way:
    for(int i = N; i >= 0; i = i-2) {
        printf("%d ", A[i]);
    }

    return 0;
}