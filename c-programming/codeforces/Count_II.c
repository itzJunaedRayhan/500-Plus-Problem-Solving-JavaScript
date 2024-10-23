#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1001];
    int cnt = 0;

    scanf("%s", str);

    //  For Loop For Count Vowels (aeiou):
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            cnt ++;
        } 
    }

    //  Print:
    printf("%d", cnt);

    return 0;
}