#include<stdio.h>

void fun (int *p) {
    *p = 455;
}

int main () {
    int x = 20;
    fun(&x);
    printf("Value of x : %d", x);
    return 0;
}