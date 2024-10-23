#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;

const int N = 1005;
bool visited[N][N];
char grid[N][N];
int A, B;
long long counter;
vector<pi> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid (int ci, int cj) {
    if (ci >= 0 && ci < A && cj >= 0 && cj < B && grid[ci][cj] == '.') 
    return true;
    else return false;
}

void dfs (int si, int sj) {
    visited[si][sj] = true;
    counter++;
    for (int i = 0; i < 4; i++) {
        pi p = dir[i];
        int ci = si + p.first;
        int cj = sj + p.second;
        if (isValid(ci, cj) && !visited[ci][cj]) 
        dfs(ci, cj);
    }
}

int main() {
    cin>>A>>B;
    long long mn = INT_MAX;

    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) 
        cin>>grid[i][j];
    }

    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            if (!visited[i][j] && grid[i][j] == '.') {
                counter = 0;
                dfs(i, j);
                mn = min(mn, counter);
            }
        }
    }

    if (counter == 0) cout<<-1;
    else cout<<mn;

    return 0;
}