#include<bits/stdc++.h>
using namespace std;

int main () {
    vector<int> v;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
        int current_index = v.size() - 1;

        while (current_index != 0) {
            int parent_index = (current_index - 1) / 2;
            if (v[parent_index] < v[current_index]) swap(v[parent_index], v[current_index]);
            else break;
            current_index = parent_index;
        }
    }
    for (int value : v) cout<<value<<" ";

    /*
    Input: 
    5
    10 30 40 50 60

    Output:
    60 50 30 10 40 
    */

    return 0;
}