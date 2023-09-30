#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9+7;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		ll n, k; cin >> n >> k;
		ll a[n];
		for (ll &x : a) cin >> x;
		ll dp[k+1] = {0};
		dp[0] = 1;
		for (int i=1;i<=k;i++) {
			for (ll x : a) {
				if (i>=x) dp[i] = (dp[i]%mod + dp[i-x]%mod) % mod;
			}
		}
		cout << dp[k] << endl;
	}
}