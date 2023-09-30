#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9+7;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		multiset<ll> s;
		int n; cin >> n;
		for (int i=0;i<n;i++) {
			ll x; cin >> x;
			s.insert(x);
		}
		ll res = 0;
		while (s.size()>2) {
			ll a = *s.begin() % mod;
			ll b = *next(s.begin()) % mod;
			res += (a%mod + b%mod);
			res %= mod;
			s.insert((a%mod + b%mod)%mod);
			s.erase(s.find(a));
			s.erase(s.find(b));
		}
		cout << (res%mod + *s.begin()%mod + *next(s.begin())%mod) % mod << endl;
	}
	return 0;
}