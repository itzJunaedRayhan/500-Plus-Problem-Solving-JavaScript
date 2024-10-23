#include<stdio.h>
#include<string.h>

int main () {
    char txt[1001];
    scanf("%s", &txt);
    int i = 0, j = strlen(txt) - 1;
    int flag = 1;

    while (i < j) {
        if (txt[i] != txt[j]) flag = 0;
        i++;
        j--;
    }

    if (flag == 0) printf("NO\n");
    else printf("YES\n");

    return 0;
}