#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9+7;

ll pow(ll a, ll b) {
	if (b==1)
		return a;
	ll x = pow(a, b/2) % mod;
	if (b%2==0)
		return ((x % mod) * (x % mod)) % mod;
	else return (((x % mod) * (x % mod)) % mod * (a % mod)) % mod;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		cout << pow(n, k) << endl;
	}
	return 0;
}