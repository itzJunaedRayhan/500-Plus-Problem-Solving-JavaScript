#include<stdio.h>

int CountVowels (char str[], int i) {
    if (str[i] == '\0') return 0;
    int x = CountVowels(str, i+1);
    if (str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 32;
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') return x = x + 1;
    else return x;
}

int main () {
    char S[201];
    fgets(S, 201, stdin);
    printf("%d", CountVowels(S, 0));
    return 0;
}