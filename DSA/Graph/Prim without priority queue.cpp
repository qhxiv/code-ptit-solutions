#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int maxn = 1000;

int n, m;
vector<pair<int, int>> adj[maxn];
bool used[maxn];

void prim (int u) {
	int d = 0;
	vector<pair<int, int>> mst;
	used[u] = 1;
	while (mst.size()<n-1) {
		int X, Y, min_weight = INT_MAX;
		for (int i=1;i<=n;i++) {
			if (used[i]) {
				for (auto tmp : adj[i]) {
					int j = tmp.first, weight = tmp.second;
					if (!used[j] and weight<min_weight) {
						min_weight = weight;
						X = j; Y = i;
					}
				}
			}
		}
		mst.push_back({X, Y});
		d += min_weight;
		used[X] = 1;
	}
	cout << d << endl;
	for (auto x : mst) cout << x.first << ' ' << x.second << endl;
}

void dfs(int u) {
	used[u] = 1;
	for (auto x : adj[u]) if (!used[x.first]) dfs(x.first);
}

// ham kiem tra xem do thi co cay khung hay khong
bool check() {
	dfs(1);
	for (int i=1;i<=n;i++) if (!used[i]) return 0;
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	cin >> n >> m;
	while (m--) {
		int x, y, w; cin >> x >> y >> w;
		adj[x].push_back({y, w});
		adj[y].push_back({x, w});
	}
	if (!check()) cout << "Do thi khong co cay khung.";
	else {
		fill(used+1, used+n+1, 0);
		prim(1);
	}
}