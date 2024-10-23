#include<stdio.h>
int main () {
    int num;
    int even = 0;
    int odd = 0;

    scanf("%d", &num);
    int A[num];

    for (int i = 0; i < num; i++) {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("%d %d", even, odd);
    return 0;
}