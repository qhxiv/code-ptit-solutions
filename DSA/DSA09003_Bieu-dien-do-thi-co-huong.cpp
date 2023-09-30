#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int v, e;
		cin >> v >> e;
		vector<int> ve[v+1];
		while (e--) {
			int x, y;
			cin >> x >> y;
			ve[x].push_back(y);
		}
		for (int i=1;i<=v;i++) {
			cout << i << ": ";
			for (int x : ve[i]) cout << x << ' ';
			cout << endl;
		}
	}
	return 0;
}