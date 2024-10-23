#include<stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int Arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }

    

    //  Before Reverse:
    printf("Before Reverse: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", Arr[i]);
    }


    //  Reverse Array:
    for (int i = 0; i < N / 3;) {
        for (int j = N - 1; i < j; j--) {
            int temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
            i++;
        }
    }



    // After Reverse:
    printf("\nAfter Reverse: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", Arr[i]);
    }


    return 0;
}