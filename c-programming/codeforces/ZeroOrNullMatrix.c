#include<stdio.h>
int main () {

    //  Declare 2D array:
    int row, column;
    scanf("%d%d", &row, &column);
    int arr[row][column];
    int element = row * column, count = 0;

    //  Get Input:
    for (int i = 0; i < row; i++)
    for (int j = 0; j < column; j++) scanf("%d", &arr[i][j]);
    

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) 
        if (arr[i][j] == 0) count++;
    }

    if (element == count) printf("It's Zero Matrix\n");
    else printf("It's not Zero Matrix\n");

    return 0;
}