#include<stdio.h>

int Add (int x, int y) {
    return x + y;
}

int main () {
    int x,y;
    scanf("%d%d", &x, &y);
    printf("%d", Add(x, y));
    return 0;
}