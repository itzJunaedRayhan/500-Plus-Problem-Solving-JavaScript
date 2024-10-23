#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1001];
    scanf("%s", str);
    
    int Arr[26] = {0};

    //  Get the Number of Alphabet:
    for (int i = 0; i < strlen(str); i++) {
        Arr[str[i] - 'a']++;
    }
        
    //  Print The Alphabet:
    for (int i = 0; i < 26; i++) {
        printf("%c - %d\n", i + 'a', Arr[i]);
    }
        
    return 0;
}