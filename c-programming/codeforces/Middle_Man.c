#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int N;
        scanf("%d", &N);
        int arr[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < N - 1; i++) {
            for (int j = i+1; j < N; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            } 
        }

        if (N % 2 != 0) {
            int a;
            a = N / 2;
            printf("%d", arr[a]);
        } else {
            int x, y;
            x = (N / 2) - 1; // 2
            y = N / 2;  //  3
            printf("%d %d", arr[x], arr[y]);
        }

    return 0;
}
