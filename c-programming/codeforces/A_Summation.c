#include<stdio.h>
int main () {
    int N;
    scanf("%d", &N);

    int nums[N]; 
    long long int sum = 0;

    for (int i = 0; i < nums[N - 1]; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    if (sum < 0) sum * -1;

    printf("%lld", sum);

    return 0;
}