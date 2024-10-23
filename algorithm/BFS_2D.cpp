#include<bits/stdc++.h>
#define pi pair<int, int>
using namespace std;

const int N = 1005;
bool visited[N][N];
int dist[N][N];
int n, m;
vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid (int cI, int cJ) {
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m) return true;
    else return false;
};

void bfs (int si, int sj) {
    queue<pi> q;
    q.push({si, sj});
    visited[si][sj] = true;
    dist[si][sj] = 0;
    while (!q.empty()) {
        int pI = q.front().first;
        int pJ = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int cI = pI + path[i].first;
            int cJ = pJ + path[i].second;
            if (isValid(cI, cJ) &&!visited[cI][cJ]) {
                q.push({cI, cJ});
                visited[cI][cJ] = true;
                dist[cI][cJ] = dist[pI][pJ] + 1;
            }
        }
    }
};

main () {
    cin >> n >> m;
    char a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }


    /*
    Input:
    2 4
    . . . .
    . . . .
    0 1

    Output:
    1 0 1 2 
    2 1 2 3 
    */

    return 0;
}