#include<stdio.h>

int charToAscii (char value) {
    int result = value;
    return result;
}

int main () {
    char value;
    scanf("%c", &value);
    printf("%d", charToAscii(value));
    return 0;
}