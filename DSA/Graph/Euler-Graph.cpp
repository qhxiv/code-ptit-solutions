#include <bits/stdc++.h>
using namespace std;

vector<set<int>> adj;
vector<bool> visited;

int count() {
	int cnt = 0;
	for (auto x : adj)
		if (x.size()%2)
			cnt++;
	return cnt;
}

void dfs(int u) {
	visited[u] = 1;
	for (auto x : adj[u]) if (!visited[x]) dfs(x);
}

bool check() {
	dfs(1);
	for (int i=1;i<=n;i++) if (!visited[i]) return 1;
	fill(visited.begin(), visited.end(), 0);
}

void euler_cycle(int u) {
	fill(visited.begin(), visited.end(), 0);
	stack<int> st;
	vector<int> ec;
	st.push(u);
	while (!st.empty()) {
		int top = st.top();
		if (adj[top].size()) {
			int f = *adj[top].begin();
			st.push(f);
			adj[top].erase(f);
			adj[f].erase(top);
		} else {
			ec.push_back(top);
			st.pop();
		}
	}
	for (int x : ec) cout << x << ' ';
}

void euler_path() {
	int f = 1, n = adj.size() - 1;
	for (int i=1;i<=n;i++) {
		if (adj[i].size()%2) {
			f = i;
			break;
		}
	}
	euler_cycle(f);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n, m, x, y; cin >> n >> m;
	adj.resize(n+1);
	visited.resize(n+1);
	while (m--) {
		cin >> x >> y;
		adj[x].insert(y);
	}
	if (check()) {
		cout << "Do thi da cho khong lien thong.";
		return 0;
	}
	int cnt = count();
	if (cnt==0) euler_cycle(1);
	else if (cnt==2) euler_path();
	else cout << "Do thi da cho khong la do thi Euler cung khong la do thi nua Euler";
}