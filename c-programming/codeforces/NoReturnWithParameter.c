#include<stdio.h>

//  No Return With Parameter:
void sum (int x, int y) {
    int s = x + y;
    printf("%d\n", s);
    return;
}

int main () {
    int a,b;
    scanf("%d%d", &a, &b);
    sum(a, b);
    return 0;
}