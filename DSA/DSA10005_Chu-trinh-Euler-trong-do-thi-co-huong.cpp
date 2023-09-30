#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> visited;
vector<vector<int>> adj, mat;

void dfs(int u){
    visited[u] = 1;
    for (int x : adj[u]) if (!visited[x]) dfs(x);
}

int solve() {
    int n = visited.size() - 1;
    if (accumulate(visited.begin(), visited.end(), 0) < n) return 0;
    for (int i=1;i<=n;i++) {
        int cnt = 0;
        for (int j=1;j<=n;j++) cnt += mat[j][i];
        if (cnt != accumulate(mat[i].begin(), mat[i].end(), 0)) return 0;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        visited.resize(n+1);
        fill(visited.begin(), visited.end(), 0);
        adj.resize(n+1);
        for (int i=1;i<=n;i++) adj[i].clear();
        mat.resize(n+1);
        for (int i=1;i<=n;i++) {
            mat[i].resize(n+1);
            fill(mat[i].begin(), mat[i].end(), 0);
        }
        while (m--) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            mat[x][y] = 1;
        }
        dfs(1);
        cout << solve() << endl;
    }
}