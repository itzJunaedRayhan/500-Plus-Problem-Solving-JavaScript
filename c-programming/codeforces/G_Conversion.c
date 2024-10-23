#include<stdio.h>
#include<string.h>

int main () {
    char str[100001];
    char s = ' '; 

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        } else if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        } else if (str[i] == ',') {
            str[i] = s;
        }
    }

    printf("%s", str);

    return 0;
}