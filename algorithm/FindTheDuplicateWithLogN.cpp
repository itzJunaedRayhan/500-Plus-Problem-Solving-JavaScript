#include<bits/stdc++.h>
using namespace std;

int binarySearch (int arr[], int left, int right, int k) {
    if (left > right) return 0;
    int mid = (left + right) / 2;
    int goLeft = binarySearch(arr, left, mid - 1, k);
    int goRight = binarySearch(arr, mid + 1, right, k);

    if (arr[mid] == k) return 1 + goLeft + goRight;
    else if (k < arr[mid]) return goLeft;
    else return goRight;
};

int main () {
    int N, K;
    cin>>N;
    int nums[N];
    for (int i=0; i<N; i++) cin>>nums[i];
    cin>>K;

    int count = binarySearch(nums, 0, N - 1, K);
    if (count > 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}