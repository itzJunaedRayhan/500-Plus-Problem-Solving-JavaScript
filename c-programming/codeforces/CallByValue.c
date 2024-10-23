#include<stdio.h>

int fun (int x) {
    x = 200;
    printf("Memory Address of Fun Function: %p\n", &x);
}

int main () {
    int x = 10;
    printf("Memory Address of main Function: %p\n", &x);
    fun(x);
    printf("Value of main Function: %d\n", x);

    return 0;
}