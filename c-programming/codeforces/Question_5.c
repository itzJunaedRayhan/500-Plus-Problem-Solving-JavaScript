#include<stdio.h>
#include<string.h>

int is_palindrome(char str[]) {
    int flag = 1, i = 0; 
    int n = strlen(str);
    while ( i < n / 2) {
        for (int j = n - 1; j > i; j--) {
            if (str[i] != str[j]) flag = 0;
            i++;
        }
    }
    return flag;
}

int main () {
    char txt[11];
    scanf("%s", txt);

    int flagValue = is_palindrome(txt);
    if (flagValue) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}