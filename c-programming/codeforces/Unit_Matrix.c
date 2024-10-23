#include<stdio.h>
int main () {
    int N, flag = 1;
    scanf("%d", &N);
    int arr[N][N];
    
    //  Get Input for Array:
    for (int i = 0; i < N; i++) 
    for (int j = 0; j < N; j++) scanf("%d", &arr[i][j]);

    //  Check Primary Diagonal for Unit Matrix:
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                if (arr[i][j] != 1) flag = 0;
            }
            else if (arr[i][j] != 0) flag = 0;
        }
    }
    if (flag == 1) printf("YES"); else printf("NO");
    return 0;
}