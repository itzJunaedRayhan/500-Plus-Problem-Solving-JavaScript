#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;

const int N = 1e3+5;
bool visited[N][N];
int dist[N][N];
int n, M;
vector<pi> direction = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool isValid(int row, int col) {
    if ((row >= 0 && row < n) && (col >= 0 && col < M)) return true;
    else return false;
}

void bfs(int Ki, int Kj) {
    queue<pi> q;
    q.push({Ki, Kj});
    visited[Ki][Kj] = true;
    dist[Ki][Kj] = 0;

    while (!q.empty()) {
        pi parent = q.front();
        q.pop();
        int parentRow = parent.first;
        int parentColumn = parent.second;

        for (int i = 0; i < 8; i++) {
            pi ParentNode = direction[i];
            int childRow = parentRow + ParentNode.first;
            int childColumn = parentColumn + ParentNode.second;
            if (isValid(childRow, childColumn) && !visited[childRow][childColumn]) {
                q.push({childRow, childColumn});
                visited[childRow][childColumn] = true;
                dist[childRow][childColumn] = dist[parentRow][parentColumn] + 1;
            }
        }
    }
}

int main() {
    int T;
    cin>>T;
    for (int i = 0; i < T; i++) {
        cin>>n>>M;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < M; j++) {
                dist[i][j] = 0;
                visited[i][j] = false;
            }
        }
        
        int Ki, Kj, Qi, Qj;
        cin>>Ki>>Kj>>Qi>>Qj;
        bfs(Ki, Kj);

        if (visited[Qi][Qj]) cout<<dist[Qi][Qj]<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}