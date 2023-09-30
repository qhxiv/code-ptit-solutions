#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll x, dp[n] = {0}, m = -1e9;
		for (int i=0;i<n;i++) {
			cin >> x;
			dp[i] = x;
			if (i==1)
				dp[i] = max(dp[i], dp[i-1]);
			else if (i>=2)
				dp[i] = max(dp[i]+dp[i-2], dp[i-1]);
		}
		cout << dp[n-1] << endl;
	}
}