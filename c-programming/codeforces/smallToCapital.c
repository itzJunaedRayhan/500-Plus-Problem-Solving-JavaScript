#include<stdio.h>

char smallToCapital (char c) {
    if(c>='a'&&c<='z') return c - 32;
};

int main () {
    char value;
    scanf("%c", &value);
    printf("%c", smallToCapital(value));
    return 0;
}