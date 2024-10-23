#include<stdio.h>
int main () {
    int N;
    scanf("%d", &N);

    int Arr[N];

    //  Get Input to Store Array:
    for (int i = 0; i <= N-1; i++) {
        scanf("%d", &Arr[i]);
    }

    int pos = 1;

    //  Shifting Array Element to Remove index 1 value:
    for (int i = pos; i < N - 1; i++) {
        Arr[i] = Arr[i + 1];
    }



    //  Print Array After Remove Elements:
    for (int i = 0; i < N-1; i++) {
        printf("%d ", Arr[i]);
    }

    return 0;
}