#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> visited;
vector<vector<int>> adj;

void dfs(int u){
    visited[u] = 1;
    for (int x : adj[u]) if (!visited[x]) dfs(x);
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
        while (m--) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(1);
        if (accumulate(visited.begin(), visited.end(), 0) < n) cout << 0;
        else {
            int cnt = 0;
            for (int i=1;i<=n;i++) {
                if (adj[i].size()%2==1) cnt++;
            }
            if (cnt==0) cout << 2;
            else if (cnt==2) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
}