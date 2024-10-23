#include<stdio.h>
#include<string.h>

int main () {
    char str[10001];
    scanf("%s", str);
    int size = strlen(str), num = 1, i = 0;

    while ( i < size / 2) {
        for (int j = size - 1; j > i; j--) {
            if (str[i] != str[j]) {
                num = 0;
            }
            i++;
        }
    }

    if (num) printf("YES\n"); 
    else printf ("NO\n");

    return 0;
}