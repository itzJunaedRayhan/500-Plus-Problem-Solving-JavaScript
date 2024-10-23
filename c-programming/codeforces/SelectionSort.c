#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);

    int Arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &Arr[i]);
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (Arr[i] > Arr[j]) {
                int temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", Arr[i]);
    }

    return 0;
}