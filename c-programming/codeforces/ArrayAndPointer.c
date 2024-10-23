#include<stdio.h>
int main () {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("0th index of address - %p\n", &arr[0]);
    printf("arr varibale array of address - %p\n\n\n", arr);


    printf("Value of 0th index - %d\n", arr[0]);
    printf("Value of 0th index using pointer: %d\n\n\n", *arr);


    printf("Value of 1st index using - %d\n", arr[1]);
    printf("Value of 1st index using pointer: %d\n", *(arr + 1));
    printf("Value of 3rd index using pointer: %d\n\n\n", *(arr + 2));


    //  Access Array Element (element of index 1) in different way:
    printf("%d\n", *(arr + 1));
    printf("%d\n", *(1 + arr));
    printf("%d\n", arr[1]);
    printf("%d\n", 1[arr]);

    return 0;
}