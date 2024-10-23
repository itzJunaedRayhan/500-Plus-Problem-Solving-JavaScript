#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int M1;
    int M2;
    int D;

    scanf("%d", &M1);
    scanf("%d", &M2);
    scanf("%d", &D);

    //  Calculate the Day:
    float result = (M1 * D) / M2;

    //  Cast into Integer the result:
    printf("%d", (int) result);
    return 0;
}
