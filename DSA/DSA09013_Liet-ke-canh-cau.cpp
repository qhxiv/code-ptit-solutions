#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<set<int>> adj;
vector<bool> visited;
set<pair<int, int>> el;

void dfs(int u) {
    visited[u] = 1;
    for (int x : adj[u]) if (!visited[x]) dfs(x);
}

void duyet_cau() {
    int cnt = 0, n = visited.size() - 1;
    for (int i=1;i<=n;i++) {
        if (!visited[i]) {
            cnt++;
            dfs(i);
        }
    }
    fill(visited.begin(), visited.end(), 0);
    for (auto z : el) {
        int x = z.first, y = z.second;
        adj[x].erase(y);
        adj[y].erase(x);
        fill(visited.begin(), visited.end(), 0);
        int tmp = 0;            
        for (int i=1;i<=n;i++) {
            if (!visited[i]) {
                tmp++;
                dfs(i);
            }
        }
        if (tmp > cnt) cout << x << ' ' << y << ' ';
        adj[x].insert(y);
        adj[y].insert(x);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m;
        visited.resize(n+1);
        fill(visited.begin(), visited.end(), 0);
        adj.resize(n+1);
        for (int i=1;i<=n;i++) adj[i].clear();
        el.clear();
        while (m--) {
            cin >> x >> y;
            pair<int, int> z;
            z.first = x;
            z.second = y;
            el.insert(z);
            adj[x].insert(y);
            adj[y].insert(x);
        }
        duyet_cau();
        cout << endl;
    }
}