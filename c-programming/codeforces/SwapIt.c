#include<stdio.h>

void swapIt (int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("From Swap Function - After Swap: %d %d\n", *x, *y);
}

int main () {
    int a,b;
    scanf("%d%d", &a, &b);

    printf("From Main Function - Before Swap: %d %d\n", a, b);

    swapIt(&a, &b);
    
    printf("From Main Function - After Swap: %d %d", a, b);
    return 0;
}