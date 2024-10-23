#include<stdio.h>
int main () {
    long long int eyes, mouths, bodies;
    long long int k = 0;
    long long int min = 0;
    scanf("%lld%lld%lld", &eyes, &mouths, &bodies);

    //  Find The Minimum Number:
    if(eyes < mouths && eyes < bodies)
        min = eyes;
    else if(mouths < eyes && mouths < bodies)
        min = mouths;
    else
        min = bodies;


    if (eyes >= 1 && mouths >=0 && bodies >= 1) {
        //  If minimum (Eyes, Mouths, Bodies) is Greater than 1:
        if (eyes >= 1 && mouths >= 1 && bodies >= 1) {
            k = k + min;
            eyes = eyes - min;
            mouths = mouths - min;
            bodies = bodies - min; 
        }

        //  Find the Half of Eyes:
        long long int halfOfEys = eyes / 2;

        //  If Half of Eyes greater than Bodies:
        if (mouths == 0 && halfOfEys >= bodies) {
            k = k + bodies;
        }
        
        //  If Bodies is greater than Half of Eyes:
        if (mouths == 0 && bodies >= halfOfEys) {
            k = k + halfOfEys;
        }

        //  Print The Katryoshka:   
        printf("%lld\n", k);
    } else {
        printf("0\n");
    }

    return 0;
}