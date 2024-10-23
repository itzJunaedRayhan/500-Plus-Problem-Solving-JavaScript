#include<stdio.h>
#include<string.h>

int main () {
    char str[1001];
    int i = 0;

    //  Get Input:
    while (scanf("%c", &str[i]) != EOF) {
        i++;
    }
    

    //  Count Capital, Small, Space:
    int capital = 0, small = 0, space = 0;
    for (int i = 0; i < strlen(str); i++) {
        if(str[i] >= 65 && str[i] <=90) {
            capital++;
        } 
        if(str[i] >= 97 && str[i] <=122) {
            small++;
        } 
        if(str[i] == ' ') {
            space++;
        } 
    }

    //  Print The Values:
    printf("Capital - %d\nSmall - %d\nSpaces - %d", capital, small, space);
    return 0;
}