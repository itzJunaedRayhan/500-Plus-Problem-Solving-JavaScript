#include<stdio.h>

void AscendingOrder (int a, int b, int c) {
    int arr[3] = {a , b, c};
    for (int i = 0; i < 2; i++)
        for (int j = i + 1; j < 3; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i]   = arr[j];
                arr[j]   = temp;
            }
        };
    for (int j = 0; j < 3; j++) printf("%d\n", arr[j]);
}
int main () {
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    AscendingOrder(a, b, c);
    printf("\n%d\n%d\n%d", a, b, c);
    return 0;
}