#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.size(), m = s2.size();
		s1 = '!' + s1;
		s2 = '!' + s2;
		int dp[n+1][m+1] = {};
		for (int i=1;i<=n;i++)
			for (int j=1;j<=m;j++)
				if (s1[i]==s2[j])
					dp[i][j] = dp[i-1][j-1] + 1;
				else
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		cout << dp[n][m] << endl;
	}
}