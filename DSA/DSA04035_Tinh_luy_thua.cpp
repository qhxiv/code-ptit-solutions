#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9+7;

ll bp(ll a, ll b) {
	if (b==0) return 1;
	if (b==1) return a % mod;
	ll x = bp(a, b/2);
	ll res = (x * x) % mod;
	if (b%2==1) res = (res * a) % mod;
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	ll a, b;
	while (cin) {
		cin >> a >> b;
		if (a==0 && b==0)
			continue;
		cout << bp(a, b) << endl;
	}
	return 0;
}