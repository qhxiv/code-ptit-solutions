#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool visited[10001];
vector<int> v[10001];

void dfs(int u, set<int> &c) {
	visited[u] = 1;
	c.insert(u);
	for (int x : v[u]) if (!visited[x]) dfs(x, c);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i=1;i<=n;i++) v[i].clear();
		while (m--) {
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		int q; cin >> q;
		while (q--) {
			fill(visited+1, visited+n+1, 0);
			int x, y;
			cin >> x >> y;
			set<int> component;
			dfs(x, component);
			if (component.count(y)==1) cout << "YES";
			else cout << "NO";
			cout << endl;
		}
	}
}