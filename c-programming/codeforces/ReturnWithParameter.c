#include<stdio.h>


//  Return With Parameter:
int sum(int x, int y);
int main () {
    printf("%d\n", sum(10, 20));
    printf("%d\n", sum(20, 30));
    return 0;
}

int sum (int x, int y) {
    int sum = x + y;
    return sum;
}