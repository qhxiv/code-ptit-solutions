#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		ll ma = -1e9, mi = 1e9;
		while (n--) {
			ll x; cin >> x;
			ma = max(ma, x);
		}
		while (m--) {
			ll x; cin >> x;
			mi = min(mi, x);
		}
		cout << ma*mi << endl;
	}
	return 0;
}