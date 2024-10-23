#include<stdio.h>
int main () {
    int x, y;
    scanf("%d %d", &x, &y);
    float z = (float) x / 100;
    float result = y / (1 - z);
    printf("%.2f", result);

    return 0;
}