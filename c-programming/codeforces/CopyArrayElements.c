#include<stdio.h>
int main () {
    //  Create First Array : 
    int N;
    scanf("%d", &N);
    int Arr1[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr1[i]);
    }


    //  Create Second Array : 
    int K;
    scanf("%d", &K);
    int Arr2[N + K];
    for (int i = N; i < N + K; i++) {
        int j = 0;
        while(j < N) {
            Arr2[j] = Arr1[j];
            j++;
        }
        scanf("%d", &Arr2[i]);
    }


    //  Print The Updated Array:
    printf("Updated Array is: ");
    for (int i = 0; i < N + K; i++) {
        printf("%d ", Arr2[i]);
    }

    return 0;
}