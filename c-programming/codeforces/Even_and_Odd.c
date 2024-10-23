#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, V, even = 0, odd = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &V);
        if (V % 2 == 0) even += V;
        else odd += V;
    }
    printf("%d %d", even, odd);
      
    return 0;
}