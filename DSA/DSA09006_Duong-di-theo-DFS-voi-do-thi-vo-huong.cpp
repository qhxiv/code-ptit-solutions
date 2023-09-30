#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<vector<int>> adj;
bool visited[1005];
vector<int> parent;

void dfs(int u) {
    visited[u] = 1;
    for (int x : adj[u]) {
        if (!visited[x]) {
            parent[x] = u;
            dfs(x);
        }
    }
}

void findPath(int s, int t) {
    if (!visited[t]) cout << -1 << endl;
    else {
        vector<int> p;
        while (t != s) {
            p.push_back(t);
            t = parent[t];
        }
        p.push_back(s);
        reverse(p.begin(), p.end());
        for (int x : p) cout << x << ' ';
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int tc; cin >> tc;
    int n, m, s, t;
    while (tc--) {
        cin >> n >> m >> s >> t;
        parent.resize(n+1);
        adj.resize(n+1);
        for (int i=1;i<=n;i++) {
            visited[i] = 0;
            parent[i] = 0;
            adj[i].clear();
        }
        while (m--) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(s);
        findPath(s, t);
    }
}