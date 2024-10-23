#include<stdio.h>
int main () {
    double x = 10.25;
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr2 = 200.256;

    printf("Value of X : %0.2lf\n", *ptr);
    printf("Address of X: %p\n", ptr);
    printf("Size of Pointer ptr: %d\n\n\n", sizeof(ptr));

    printf("Value of x using ptr2: %0.2lf\n", *ptr2);
    printf("Address of x using ptr2: %p\n\n\n", ptr2);
    printf("Value of x using ptr: %0.2lf\n", *ptr);
    printf("Address of x using ptr: %p\n\n\n", ptr);

    printf("Value of x: %0.2lf\n", x);
    printf("Address of x: %p\n\n\n", &x);

    printf("Memory address of pointer variable ptr: %p\n", &ptr);
    printf("Memory address of pointer variable ptr2: %p\n", &ptr2);
    return 0;
}