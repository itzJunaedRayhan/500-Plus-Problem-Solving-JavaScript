#include<bits/stdc++.h>
using namespace std;

int binarySearch (int arr[], int arrSize, int k) {
    int flag = -1;
    int left = 0, right = arrSize - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == k) {
            flag = mid;
            break;
        }
        if (k > arr[mid]) left = mid + 1;
        else right = mid - 1;
    }
    return flag;
};

int main () {
    int N, K;
    cin>>N;
    int nums[N];
    for (int i=0; i<N; i++) cin>>nums[i];
    cin>>K;

    int foundOrNot = binarySearch(nums, N, K);
    if (foundOrNot != -1) cout<<foundOrNot<<endl;
    else cout<<"Not Found"<<endl;

    return 0;
}