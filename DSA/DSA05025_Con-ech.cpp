#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll dp[n+1];
		dp[0] = 1;
		for (int i=1;i<=n;i++) {
			dp[i] = 0;
			for (int j=max(0, i-3); j<i;j++)
				dp[i] += dp[j];
		}
		cout << dp[n] << endl;
	}
	return 0;
}