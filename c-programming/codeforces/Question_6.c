#include<stdio.h>

void ChangeTheValue (int x) {
    x = x * x;
    printf("Changed value in ChangeTheValue Function: %d\n", x);
}

int main () {
    int a = 10;
    printf("Before Pass The Value as Parameter: %d\n", a);
    ChangeTheValue(a);
    printf("After Pass The Value as Parameter: %d\n", a);
    return 0;
}

// Output:
// Before Pass The Value as Parameter: 10
// Changed value in ChangeTheValue Function: 100
// After Pass The Value as Parameter: 10
