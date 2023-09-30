#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<int> v[n+1];
		for (int i=0;i<m;i++) {
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		for (int i=1;i<=n;i++) {
			if (v[i].size()>0) {
				cout << i << ": ";
				for (int x : v[i]) cout << x << ' ';
				cout << endl;
			}
		}
	}
	return 0;
}