#include<stdio.h>
int main () {
    char c;
    int counter[26] = {0};

    while (scanf("%c", &c) != EOF) {
        counter[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++) {
        if (counter[i - 'a'] > 0) {
            printf("%c : %d\n", i, counter[i - 'a']);
        }
    }

    return 0;
}