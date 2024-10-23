#include<stdio.h>

double fun (double *arr, int n) {
    for (int i = 0; i < n; i++) printf("%0.2lf ", i[arr]);
}

int main () {
    double arr[5] = {10.5, 20.2, 30.1, 40.6, 50.0};
    fun(arr, 5);
    return 0;
}