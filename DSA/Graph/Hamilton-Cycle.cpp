#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
vector<int> adj[100];
bool visited[100];
int x[100];
bool ok = 0;

void output() {
    for (int i=1;i<=n;i++) cout << x[i] << ' ';
    cout << x[1] << endl;
}

void Hamilton(int i) {
    for (int y : adj[x[i-1]]) {
        if (i==n+1 and y==x[1]) {
            ok = 1;
            output();
        } else if (!visited[y]) {
            x[i] = y;
            visited[y] = 1;
            Hamilton(i+1);
            visited[y] = 0;
        }
    }
}

void dfs(int u) {
    visited[u] = 1;
    for (int x : adj[u]) if (!visited[x]) dfs(x);
}

bool connected() {
    dfs(1);
    int s = accumulate(visited+1, visited+n+1, 0);
    fill(visited+1, visited+n+1, 0);
    return s==n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if (!connected()) {
        cout << "Do thi da nhap khong lien thong.";
        return 0;
    }
    for (int i=1;i<=n;i++) {
        x[1] = i;
        fill(visited+1, visited+n+1, 0);
        visited[i] = 1;
        Hamilton(2);
    }
    if (!ok) cout << "Do thi da nhap khong co chu trinh Hamilton.";
}