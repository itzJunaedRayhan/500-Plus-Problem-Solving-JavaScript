#include<stdio.h>


//  Return With No Parameter:
int sum () {
    int x, y;
    scanf("%d%d", &x, &y);
    int s = x + y;
    return s;
}

int main () {
    int s = sum();
    printf("%d\n", s);
    return 0;
}

