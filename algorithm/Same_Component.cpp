#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;

const int N = 1005;
bool visited[N][N];
char grid[N][N];
int A, B;
vector<pi> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid (int ci, int cj) {
    if (ci >= 0 && ci < A && cj >= 0 && cj < B && grid[ci][cj] == '.')
    return true;
    else return false;
}

void dfs (int si, int sj) {
    visited[si][sj] = true;
    for (int i = 0; i < 4; i++) {
        pi p = direction[i];
        int ci = si + p.first;
        int cj = sj + p.second;
        if (isValid(ci, cj) && !visited[ci][cj])
        dfs(ci, cj);
    }
}

int main() {
    cin>>A>>B;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++)
        cin>>grid[i][j];
    }

    int si, sj;
    cin>>si>>sj;
    dfs(si, sj);

    int di, dj;
    cin>>di>>dj;
    if (visited[di][dj]) cout << "YES";
    else cout << "NO";

    return 0;
}