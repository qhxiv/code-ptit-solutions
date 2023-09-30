#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t, n, s;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		int v[n+1], w[n+1];
		for (int i=1;i<=n;i++) cin >> w[i];
		for (int i=1;i<=n;i++) cin >> v[i];
		int dp[n+1][s+1] = {};
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=s;j++) {
				dp[i][j] = dp[i-1][j];
				if (j>=w[i])
					dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]]+v[i]);
			}
		}
		cout << dp[n][s] << endl;
	}
}