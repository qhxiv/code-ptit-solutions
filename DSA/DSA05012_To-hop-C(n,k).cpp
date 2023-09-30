#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9+7;
ll dp[1001][1001];

void init() {
	for (int i=1;i<=1000;i++) dp[1][i] = i;
	for (int i=2;i<=1000;i++) {
		for (int j=1;j<=1000;j++) {
			if (i>j) continue;
			dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
			dp[i][j] %= mod;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	init();
	int t; cin >> t;
	while (t--) {
		int k, n;
		cin >> n >> k;
		cout << dp[k][n] << endl;
	}
}