#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18+10;

int main() {
    int N, E;
    cin>>N>>E;
    long long dist[N + 1][N + 1];
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            dist[i][j] = INF;
            if (i == j) dist[i][j] = 0;
        }
    }

    while (E--) {
        long long A, B, W;
        cin>>A>>B>>W;
        dist[A][B] = min(dist[A][B], W);
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    int T;
    cin>>T;
    while (T--) {
        int S, D;
        cin>>S>>D;
        if (dist[S][D] == INF)cout<<-1<<endl;
        else cout<<dist[S][D]<<endl;
    }

    return 0;
}