#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    int Arr[num];

    //  Store Input into Array:
    for (int i = 0; i < num; i++) {
        scanf("%d", &Arr[i]);
    }
        
    //  Get Value to get Find next:
    int value;
    int result = 0;
    scanf("%d", &value);

    //  Find the number of Value:
    for (int i = 0; i < num; i++) {
        if (Arr[i] == value) {
            result++;
        }
    }
        
    //  Print:
    printf("%d", result);

    return 0;
}
