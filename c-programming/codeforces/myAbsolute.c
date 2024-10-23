#include<stdio.h>
#include <stdlib.h>

void myAbsolute (int num) {
    printf("%d", abs(num));
}

int main () {
    int n;
    scanf("%d", &n);
    myAbsolute(n);
    return 0;
}