#include<stdio.h>

char CapitalToSmall () {
    char c;
    scanf("%c", &c);
    if(c>='A'&&c<='Z') printf("%c", c + 32);
};

int main () {
    CapitalToSmall();
    return 0;
}