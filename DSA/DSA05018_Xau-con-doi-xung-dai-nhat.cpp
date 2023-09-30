#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	string s;
	while (t--) {
		cin >> s;
		int n = s.size(), m = 1;
		s = '!' + s;
		bool dp[n+1][n+1] = {0};
		for (int i=1;i<=n;i++) dp[i][i] = 1;
		for (int k=2;k<=n;k++) {
			for (int i=1;i<=n-k+1;i++) {
				int j = i + k - 1;
				if (k==2)
					dp[i][j] = s[j]==s[i];
				else if (s[i]==s[j])
					dp[i][j] = dp[i+1][j-1];
				if (dp[i][j]) m = max(m, j-i+1);
			}
		}
		cout << m << endl;
	}
}