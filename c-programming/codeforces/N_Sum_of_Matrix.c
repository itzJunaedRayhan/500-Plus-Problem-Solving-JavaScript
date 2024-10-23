#include<stdio.h>
int main () {
    int row, col;
    scanf("%d%d", &row, &col);
    int A[row][col], B[row][col], C[row][col];

    //  Get Array Element from User for Array of A[]:
    for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++) scanf("%d", &A[i][j]);

    //  Get Array Element from User for Array of B[]:
    for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++) scanf("%d", &B[i][j]);

    //  Sum of Array A and B and Result will go to Array C:
    for (int i = 0; i < row; i++) {
        for (int j = col-1; j >= 0; j--) C[i][j] = A[i][j] + B[i][j];
    }

    //  Print the Result Array of B[]:
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    
    return 0;
}