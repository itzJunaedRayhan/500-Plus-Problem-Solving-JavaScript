#include<stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int Arr[N];

    //  Get Input to store in Array:
    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }

    //  initial values of Min and Max:
    int min = Arr[0], max = Arr[0];


    //  Find The Min and Max:
    for (int i = 1; i < N; i++) {
        if (Arr[i] < min) {
            min = Arr[i];
        } else if (Arr[i] > max) {
            max = Arr[i];
        }
    }

    //  Replace Min value to Max and Max value to min value:
    for (int i = 0; i < N; i++) {
        if (Arr[i] == min) {
            Arr[i] = max;
        }else if (Arr[i] == max) {
            Arr[i] = min;
        }
    }

    //  Print the Final Array:
    for (int i = 0; i < N; i++) {
        printf("%d ", Arr[i]);
    }

    return 0;
}