#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll find_pos(ll a[], ll l, ll r, ll x) {
	ll res = -1;
	while (l<=r) {
		ll m = (l+r)/2;
		if (a[m]<x) {
			res = m;
			l = m + 1;
		} else r = m - 1;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		ll n, k; cin >> n >> k;
		ll a[n];
		for (ll i=0;i<n;i++)
			cin >> a[i];
		sort(a, a+n);
		ll cnt = 0;
		for (ll i=0;i<n-1;i++) {
			ll p = find_pos(a, i+1, n-1, k + a[i]);
			if (p!=-1)
				cnt += p-i;
		}
		cout << cnt << endl;
	}
	return 0;
}