#include<stdio.h>

int LengthOfStr (char *str, int i) {
    if (str[i] == '\0') return 0;
    int l = LengthOfStr(str, i+1);
    return l+1;
}

int main () {
    char str[101];
    scanf("%s", &str);

    int length = LengthOfStr(str, 0);
    printf("%d\n", length);

    return 0;
}