#include<stdio.h>

int main () {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i]   = arr[j];
                arr[j]   = temp;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < N; i++) if (arr[i] == arr[0]) count++;
    if (count % 2 == 0) printf("Unlucky");
    else printf("Lucky");

    return 0;
}