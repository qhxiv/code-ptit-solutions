#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll a[n], s = 0;
		for (ll &x : a) {
			cin >> x;
			s += x;
		}
		vector<ll> b(a, a+n);
		int res = -2;
		for (int i=0;i<n;i++) {
			if (i>0) b[i] += b[i-1];
			if (s-b[i] == b[i]-a[i]) {
				res = i;
				break;
			}
		}
		cout << res + 1 << endl;
	}
	return 0;
}