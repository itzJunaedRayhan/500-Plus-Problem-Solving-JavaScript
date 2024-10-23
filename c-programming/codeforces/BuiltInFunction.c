#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main () {
    double x;
    scanf("%lf", &x);

//  Find Ceil:
    int ceilValue  = ceil(x); 
    printf("CEIL Value: %d\n", ceilValue);


//  Find Floor:  
    int floorValue = floor(x);
    printf("FLOOR Value: %d\n", floorValue);


//  Find Round:
    int roundValue = round(x);
    printf("ROUND Value: %d\n", roundValue);


//  Find SQRT Value:
    double y;
    scanf("%lf", &y);
    double sqrtValue = sqrt(y);
    printf("SQRT Value: %0.2lf\n", sqrtValue);


//  Find Power:
    int a, b;
    scanf("%d%d", &a, &b);
    int PowValue = pow(a*1.0, b*1.0);
    printf("POWER Value: %d\n", PowValue);


//  Find Absolute Number:
    int k;
    scanf("%d", &k);
    int absValue = abs(k);
    printf("ABSOLUTE Value: %d\n", absValue);



    return 0;
}