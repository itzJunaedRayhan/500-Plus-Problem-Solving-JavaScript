#include<bits/stdc++.h>
using namespace std;

void Merge (int arr1[], int m, int arr2[], int n) {
    int LeftArr[m];
    int RightArr[n];
    for (int i = 0; i < m; i++) LeftArr[i] = arr1[i];
    for (int i = 0; i < n; i++) RightArr[i] = arr2[i];

    LeftArr[m] = INT_MIN;
    RightArr[n] = INT_MIN;
    int leftPointer = 0, rightPointer = 0;
    for (int i = 0; i <= m+n; i++) {
        if (LeftArr[leftPointer] >= RightArr[rightPointer]) {
            arr1[i] = LeftArr[leftPointer];
            leftPointer++;
        } else {
            arr1[i] = RightArr[rightPointer];
            rightPointer++;
        }
    }
};

int main () {
    int M;
    cin>>M;
    int arr1[M];
    for (int i=0; i<M; i++) cin>>arr1[i];

    int N;
    cin>>N;
    int arr2[N];
    for (int i=0; i<N; i++) cin>>arr2[i];

    Merge(arr1, M, arr2, N);
    for (int i=0; i<M + N; i++) cout<<arr1[i]<<" ";

    return 0;
}