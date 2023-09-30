#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t, n, s; cin >> t;
	while (t--) {
		cin >> n >> s;
		int a[n+1], dp[s+1] = {0};
		for (int i=1;i<=n;i++) cin >> a[i];
		dp[0] = 1;
		for (int i=1;i<=n;i++) {
			for (int j=s;j>=a[i];j--) {
				if (!dp[j])
					dp[j] = dp[j-a[i]];
			}
		}
		if (dp[s]) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}