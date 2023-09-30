#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> v[1001];
bool visited[1001];

void bfs(int u) {
	queue<int> q;
	q.push(u);
	while (!q.empty()) {
		int top = q.front();
		q.pop();
		visited[top] = 1;
		for (int x : v[top]) {
			if (!visited[x]) {
				visited[x] = 1;
				q.push(x);
			}
		}
	}
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
			v[y].push_back(x);
		}
		int cnt = 0;
		for (int i=1;i<=n;i++) {
			if (!visited[i]) {
				bfs(i);
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}