#include<stdio.h>

//  Has Return + Parameter:
int add (int x, int y) {
    return x + y;
}


//  Has Return + No Parameter:
int FindSquareValue () {
    int z = 9;
    return z * z;
}

//  No Return + Parameter:
void FindEvenOrOdd(int p) {
    if (p % 2 == 0) printf("The Given Number is %d - EVEN\n\n", p);
    else printf("The Given Number is %d - ODD\n\n", p);
}

//  No Return + No Parameter:
void isAdult () {
    int age = 17;
    if (age >= 18) printf("You are Adult!\n\n");
    else printf("You are not adult.\n\n");
}

int main () {
    int a = 10, b = 20, p = 9;
    //  Sum Operation - Has Return + Parameter::
    printf("The Summation of a and b is: %d\n\n", add(a, b));
    
    //  Square Operation - Has Return + Parameter::
    printf("The Square value is : %d\n\n", FindSquareValue());

    //  Even or Odd Find -  No Return + Parameter::
    FindEvenOrOdd(p);

    //  is adult check - No Return + No Parameter::
    isAdult();

    return 0;
}