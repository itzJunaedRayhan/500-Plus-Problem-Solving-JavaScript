#include<stdio.h>
int main () {
    int T;
    scanf("%d", &T);
    int h, w;
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &h, &w);
        if (h == w) printf("Square\n");
        else printf("Rectangle\n");
    }
    return 0;
}