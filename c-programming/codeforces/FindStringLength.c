#include<stdio.h>

void FindStringLengh (char *txt) {
    int length = 0;
    for (int i = 0; txt[i]!='\0'; i++) {
        length++;
    }
    printf("%d", length);
}

int main () {
    char str[1001];
    scanf("%s", &str);

    FindStringLengh(str);
    return 0;
}