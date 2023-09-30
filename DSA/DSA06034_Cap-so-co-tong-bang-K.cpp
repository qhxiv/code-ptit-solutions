#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		ll a[n];
		map<ll, ll> mp;
		for (ll &x : a) {
			cin >> x;
			mp[x]++;
		}
		ll cnt = 0;
		for (ll x : a) {
			cnt += mp[k-x];
			if (x*2==k)
				cnt--;
		}
		cout << cnt/2 << endl;
	}
	return 0;
}