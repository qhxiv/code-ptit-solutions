#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll a[n];
		for (ll &x : a) cin >> x;
		bool ok = 1; int res = -1;
		for (int i=0;i<n-1;i++) {
			ll x;
			cin >> x;
			if (x!=a[i] && ok) {
				ok = 0;
				res = i + 1;
			}
		}
		if (res==-1)
			res = n;
		cout << res << endl;
	}
	return 0;
}