#include<stdio.h>
#include<string.h>

int main () {
    char a[11], b[11], temp[1];
    scanf("%s%s", a, b);

    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s%s\n", a,b);

    temp[0] = a[0];
    a[0] = b[0];
    b[0] = temp[0];

    printf("%s %s", a, b);

    return 0;
}