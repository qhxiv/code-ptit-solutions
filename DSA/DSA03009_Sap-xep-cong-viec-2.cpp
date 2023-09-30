#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		ll n, dmax = -1; cin >> n;
		vector<ll> v[10001];
		while (n--) {
			ll i, d, p;
			cin >> i >> d >> p;
			dmax = max(dmax, d);
			v[d].push_back(p);
		}
		ll res = 0, cnt = 0;
		multiset<ll> a;
		for (ll i=dmax;i>=1;i--) {
			for (ll x : v[i]) a.insert(x);
			if (a.size()==0) continue;
			ll tmp = *a.rbegin();
			res += tmp;
			cnt++;
			a.erase(a.find(tmp));
		}
		cout << cnt << ' ' << res << endl;
	}
	return 0;
}