#include<bits/stdc++.h>
using namespace std;

Merge (int nums[], int left, int right, int mid) {
    int leftSize = mid - left + 1;
    int LeftArr[leftSize + 1];
    for (int i = left, j = 0; i <= mid; i++, j++) LeftArr[j] = nums[i];

    int rightSize = right - mid;
    int RightArr[rightSize + 1];
    for (int i = mid + 1, j = 0; i <= right; i++, j++) RightArr[j] = nums[i];

    LeftArr[leftSize] = INT_MIN;
    RightArr[rightSize] = INT_MIN;
    int leftPointer = 0, rightPointer = 0;
    for (int i = left; i <= right; i++) {
        if (LeftArr[leftPointer] >= RightArr[rightPointer]) {
            nums[i] = LeftArr[leftPointer];
            leftPointer++;
        } else {
            nums[i] = RightArr[rightPointer];
            rightPointer++;
        }
    }
};

void MergeSort (int arr[], int left, int right) {
    if (left == right) return;
    int mid = (left + right) / 2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    Merge(arr, left, right, mid);
};

int main () {
    int N;
    cin>>N;
    int nums[N];
    for (int i=0; i<N; i++) cin>>nums[i];
    MergeSort(nums, 0, N-1);

    for (int i=0; i<N; i++) cout<<nums[i]<<" ";

    return 0;
}