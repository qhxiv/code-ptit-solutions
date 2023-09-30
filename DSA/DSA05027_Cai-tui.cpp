#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, s;
		cin >> n >> s;
		int w[n+1], v[n+1], dp[n+1][s+1] = {};
		for (int i=1;i<=n;i++)
			cin >> w[i];
		for (int i=1;i<=n;i++)
			cin >> v[i];
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=s;j++) {
				dp[i][j] = dp[i-1][j];
				if (w[i]<=j)
					dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]]+v[i]);
			}
		}
		cout << dp[n][s] << endl;
	}
	return 0;
}