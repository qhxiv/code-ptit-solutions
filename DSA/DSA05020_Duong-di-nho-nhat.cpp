#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		ll x, dp[n+1][m+1];
		for (int i=1;i<=n;i++)
			for (int j=1;j<=m;j++) {
				cin >> x;
				if (i==1 && j==1)
					dp[i][j] = x;
				else if (i==1 && j!=1)
					dp[i][j] = dp[i][j-1] + x;
				else if (i!=1 && j==1)
					dp[i][j] = dp[i-1][j] + x;
				else {
					dp[i][j] = min({dp[i-1][j] + x, dp[i][j-1] + x, dp[i-1][j-1] + x});
				}
			}
		cout << dp[n][m] << endl;
	}
	return 0;
}