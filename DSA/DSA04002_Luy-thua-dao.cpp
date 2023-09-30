#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9+7;

ll pow(ll a, ll b) {
	if (b==1)
		return a % mod;
	if (b==0)
		return 1;
	ll x = pow(a, b/2) % mod;
	x = (x*x) % mod;
	if (b%2==1)
		x = (x*a) % mod;
	return x % mod;
}

ll reverse(ll a) {
	ll res = 0;
	while (a) {
		res = res*10 + a%10;
		a /= 10;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		ll n, k;
		cin >> n;
		k = reverse(n);
		cout << pow(n, k) << endl;
	}
	return 0;
}