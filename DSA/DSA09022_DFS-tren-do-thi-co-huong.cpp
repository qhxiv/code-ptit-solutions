#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> adj[1001];
int visited[1001];

void dfs(int u) {
	visited[u] = 1;
	cout << u << ' ';
	for (int x : adj[u]) if (visited[x]==0) dfs(x);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, m, u;
		cin >> n >> m >> u;
		for (int i=1;i<=n;i++) adj[i].clear();
		fill(visited+1, visited+n+1 ,0);
		string s;
		cin.ignore();
		getline(cin, s);
		stringstream ss(s);
		int tmp[3], cnt = 0;
		while (ss >> s) {
			cnt++;
			if (cnt==3) cnt = 1;
			tmp[cnt] = stoi(s);
			if (cnt==2) adj[tmp[1]].push_back(tmp[2]);
		}
		dfs(u);
		cout << endl;
	}
	return 0;
}