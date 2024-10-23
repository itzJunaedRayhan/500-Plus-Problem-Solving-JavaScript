#include<stdio.h>

//  No Return No Parameter:
void sum () {
    int x,y;
    scanf("%d%d", &x, &y);

    int s = x + y;
    printf("%d\n", s);
    return;
}

int main () {
    sum();
    return 0;
}