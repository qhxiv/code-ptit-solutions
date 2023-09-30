#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, u;
vector<vector<int>> adj;
vector<bool> visited;
vector<pair<int, int>> st;

void dfs(int u) {
    visited[u] = 1;
    for (int x : adj[u]) {
        if (!visited[x]) {
            st.push_back({u, x});
            dfs(x);
        }
    }
}

void solve() {
    dfs(u);
    if (st.size()<n-1) cout << -1 << endl;
    else for (auto x : st) cout << x.first << ' ' << x.second << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        cin >> n >> m >> u;
        adj.resize(n+1);
        for (int i=1;i<=n;i++) adj[i].clear();
        visited.resize(n+1);
        fill(visited.begin(), visited.end(), 0);
        st.clear();
        while (m--) {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        solve();
    }
}