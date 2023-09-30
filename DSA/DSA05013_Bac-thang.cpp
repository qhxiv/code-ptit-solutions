#include <bits/stdc++.h>

using namespace std;

int mod = 1e9+7;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int dp[n+1];
		dp[0] = dp[1] = 1;
		for (int i=2;i<=n;i++) {
			dp[i] = 0;
			for (int j=max(i-k, 0);j<i;j++) {
				dp[i] += dp[j]%mod;
				dp[i] %= mod;
			}
		}
		cout << dp[n] << endl;
	}
	return 0;
}