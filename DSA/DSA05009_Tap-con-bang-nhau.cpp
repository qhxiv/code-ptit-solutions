#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n+1], s = 0;
		for (int i=1;i<=n;i++) {
			cin >> a[i];
			s += a[i];
		}
		if (s%2) {
			cout << "NO\n";
			continue;
		}
		s /= 2;
		int dp[n+1][s+1] = {};
		for (int i=0;i<=n;i++) dp[i][0] = 1;
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=s;j++) {
				dp[i][j] = dp[i-1][j];
				if (j>=a[i])
					dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]]);
			}
		}
		if (dp[n][s]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}