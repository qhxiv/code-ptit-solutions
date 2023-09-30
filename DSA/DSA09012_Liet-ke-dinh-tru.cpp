#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> visited;
vector<vector<int>> adj;

void dfs(int u) {
	visited[u] = 1;
	for (int x : adj[u]) if (!visited[x]) dfs(x);
}

void tru() {
	int cnt = 0, n = visited.size() - 1;
	for (int i=1;i<=n;i++) {
		if (visited[i] == 0) {
			dfs(i);
			cnt++;
		}
	}
	for (int i=1;i<=n;i++) {
		fill(visited.begin(), visited.end(), 0);
		visited[i] = 1;
		int tmp = 0;
		for (int j=1;j<=n;j++) {
			if (visited[j] == 0) {
				dfs(j);
				tmp++;
			}
		}
		if (tmp > cnt) cout << i << ' ';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
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
		tru();
		cout << endl;
	}
}