#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> *v;
int visited[100001];

void bfs(int u) {
	queue<int> q;
	q.push(u);
	while (!q.empty()) {
		int top = q.front();
		visited[top] = 1;
		cout << top << ' ';
		q.pop();
		for (int x : v[top]) {
			if (visited[x]==0) {
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
		int n, m , u;
		cin >> n >> m >> u;
		fill(visited+1, visited+n+1, 0);
		vector<int> tmp[n+1];
		for (int i=0;i<m;i++) {
			int x, y;
			cin >> x >> y;
			tmp[x].push_back(y);
		}
		v = tmp;
		bfs(u);
		cout << endl;
	}
	return 0;
}