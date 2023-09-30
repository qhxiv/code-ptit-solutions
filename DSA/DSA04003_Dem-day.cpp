#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 123456789;

ll bp(ll n) {
	if (n==0) return 1;
	if (n==1) return 2;
	ll x = bp(n/2) % mod;
	if (n%2==0) return ((x%mod) * (x%mod)) % mod;
	else return ((x%mod) * (x%mod) * 2) % mod;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		if (n==0) cout << 0;
		else cout << bp(n-1);
		cout << endl;
	}
	return 0;
}