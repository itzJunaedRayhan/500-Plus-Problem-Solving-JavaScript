#include<stdio.h>
#include<string.h>

int main () {
    int N;
    scanf("%d", &N);

    char text[101];

    for (int i = 0; i < N; i++) {
       scanf("%s", text);
        int size = strlen(text);
        if (size <= 10) {
            printf("%s\n", text);
        } else {
            printf("%c%d%c\n", text[0],size-2,text[size-1]);
        } 
    }

    return 0;
}