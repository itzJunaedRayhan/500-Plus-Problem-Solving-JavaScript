#include<stdio.h>
int main () {
    char a;
    scanf("%c", &a);

    if (a == 'z') {
        printf("%c\n", 'a');
    }
    
    else if (a == 'Z') {
        printf("%c\n", 'A');
    } else {
        printf("%c\n", ++a);
    }
    return 0;
}