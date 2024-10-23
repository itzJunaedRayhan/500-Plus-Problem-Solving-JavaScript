#include<stdio.h>
int main () {
    int row, col;
    scanf("%d%d", &row, &col);
    int arr[row][col];
    
    //  Get Input for Array:
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        } 
    }
    

    //  Print Last Row:
    int r = row - 1;  //  2
    for (int i = 0; i < col; i++) {
        printf("%d ", arr[r][i]);
    } 
    printf("\n");


    //  Print The last Column:
    int c = col-1;    
    for (int i = 0; i < row; i++) {
        printf("%d ", arr[i][c]);
    }

    return 0;
}