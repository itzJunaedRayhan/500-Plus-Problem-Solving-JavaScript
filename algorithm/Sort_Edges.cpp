#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;

int main() {
    priority_queue <pi, vector<pi>, greater<pi>> pq;
    int E;
    cin>>E;

    for (int i = 0; i < E; i++) {
        int A, B;
        cin>>A>>B;
        pq.push({A, B});
    }

    while (!pq.empty()) {
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }

    return 0;
}