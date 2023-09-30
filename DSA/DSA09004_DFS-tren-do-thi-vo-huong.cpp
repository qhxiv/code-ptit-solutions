#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> v[1000];
int visited[1001];

void dfs(int u) {
	visited[u] = 1;
	cout << u << ' ';
	for (int x : v[u]) if (visited[x]==0) dfs(x);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, m, u;
		cin >> n >> m >> u;
		for (int i=1;i<=n;i++) v[i].clear();
		fill(visited+1, visited+n+1 ,0);
		while (m--) {
			int x, y; cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		dfs(u);
		cout << endl;
	}
	return 0;
}