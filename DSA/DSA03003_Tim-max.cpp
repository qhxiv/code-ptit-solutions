#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9+7;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll a[n], s = 0;
		for (ll &x : a) cin >> x;
		sort(a, a+n);
		for (ll i=0;i<n;i++) {
			s += (i%mod)*(a[i]%mod);
			s %= mod;
		}
		cout << s << endl;
	}
	return 0;
}