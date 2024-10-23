#include<stdio.h>
int main () {
    int x = 10;

//  Pointer Is a Variable which is used to store the memory address.


//  Find The Memory Address of x without Pointer:
    printf("%p\n", &x);


//  Find The Memory Address of x Using Pointer:
    int* p = &x;
    printf("%p\n", p); 


//  Dereference:
//  Find The Value of x using Pointer:
    printf("%d\n", *p);


//  Change The Value of X using Pointer Variable:
    *p = 500;
    printf("%d\n", x);


    return 0;
}