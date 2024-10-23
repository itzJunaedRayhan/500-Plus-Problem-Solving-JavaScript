#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1001];
    int capital = 0;
    int small = 0;

    scanf("%s", str);

    //  For Loop To Count Small and Capital:
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            small++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            capital++;
        } 
    }

    //  Print:
    printf("%d %d", capital, small);

    return 0;
}
