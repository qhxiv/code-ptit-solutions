#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int dp[100001] = {0};
	for (int i=2;i<=100000;i++) {
		if (i%2==0 && i%3==0) dp[i] = min(dp[i/2], dp[i/3]) + 1;
		else if (i%2==0) dp[i] = min(dp[i/2], dp[i-1]) + 1;
		else if (i%3==0) dp[i] = min(dp[i/3], dp[i-1]) + 1;
		else dp[i] = dp[i-1] + 1;
	}
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << dp[n] << endl;
	}
}