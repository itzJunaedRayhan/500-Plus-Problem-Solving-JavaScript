#include<stdio.h>
int main () {
    int m, n;
    scanf("%d%d", &m, &n);

    int arr[m];

    //  Store Input to array from User:
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    //  Declare an Array:
    int arrTwo[n+1];


    //  Declare Array's initial Value as Zero:
    for (int i = 0; i < n+1; i++) {
        arrTwo[i] = 0;
    }


    //  Declare Array's Final Value:
    for (int i = 0; i < m; i++) {
        int value = arr[i];
        arrTwo[value]++;
    }
    

    //  Print The Result Array:
    for (int i = 1; i <= n; i++) {
        printf("%d\n", arrTwo[i]);
    }

    return 0;
}