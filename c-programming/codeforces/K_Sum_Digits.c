#include<stdio.h>
int main () {
    long int N, sum = 0;
    scanf ("%ld", &N);

    char nums[N];
    scanf("%s", nums);

    int arr[N];
    
    //  For Convert Char type to Int:
    for (int i = 0; i < N; i++) {
        arr[i] = nums[i] - 48;
    }

    //  For Add Operation among numbers:
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum);

    return 0;
}