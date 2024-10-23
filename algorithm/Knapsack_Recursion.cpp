#include<bits/stdc++.h>
using namespace std;

int knapsack (int n, int size, int value[], int weight[]) {
    //  base case:
    if (n == 0 || size == 0) return 0;
    if (weight[n - 1] <= size) {
        int option1 = knapsack(n - 1, size - weight[n - 1], value, weight) + value[n - 1];
        int option2 = knapsack(n - 1, size, value, weight);
        return max(option1, option2);
    } else {
        return knapsack(n - 1, size, value, weight);
    }
};

main () {
    int n;
    cin>>n;
    int value[n], weight[n];
    for (int i = 0; i < n; i++) cin>>value[i];
    for (int i = 0; i < n; i++) cin>>weight[i];
    int size;
    cin>>size;
    cout<<knapsack(n, size, value, weight);

    return 0;
}