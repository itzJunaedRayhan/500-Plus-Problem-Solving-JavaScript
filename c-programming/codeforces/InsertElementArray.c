#include<stdio.h>
int main () {
    int N;
    scanf("%d", &N);

    int Arr1[N];

    //  Get Input to Store in Array:
    for (int i = 0; i <= N-1; i++) {
        scanf("%d", &Arr1[i]);
    }


    int pos = 1;
    int value = 100;

    N++;

    //  Shifting Array Elements:
    for (int i = N - 1; i >= pos; i--) {
        Arr1[i] = Arr1[i - 1];
    }


    //  Set the value in Given Position:
    Arr1[pos] = value;


    //  Display Array Elements after Insertion:
    for (int i = 0; i <= N-1; i++) {
        printf("%d ", Arr1[i]);
    }

    return 0;
}