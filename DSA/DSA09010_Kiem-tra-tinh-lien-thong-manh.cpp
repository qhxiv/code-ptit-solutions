#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> v[1001];
bool visited[1001];

void dfs(int u) {
	visited[u] = 1;
	for (int x : v[u]) if (!visited[x]) dfs(x);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i=1;i<=n;i++) v[i].clear();
		fill(visited+1, visited+n+1, false);
		while (m--) {
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
		}
		dfs(1);
		if (accumulate(visited+1, visited+n+1, 0) == n) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}