#include<stdio.h>
int main () {

    //  Declare 2D array:
    int row, column;
    scanf("%d%d", &row, &column);
    int arr[row][column];

    //  Get Input:
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    //  Print Row:
    int r;
    scanf("%d", &r);
    for (int i = 0; i < column; i++) {
        printf("%d ", arr[r][i]);
    }
    printf("\n");

    //  Print Column:
    int c;
    scanf("%d", &c);
    for (int i = 0; i < row; i++) {
        printf("%d ", arr[i][c]);
    }
    printf("\n");

    return 0;
}