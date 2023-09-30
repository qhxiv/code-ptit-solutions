#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n], dp[n] = {0}, m = -1;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			dp[i] = a[i];
			for (int j=0;j<i;j++)
				if (a[j]<a[i])
					dp[i] = max(dp[i], dp[j]+a[i]);
			m = max(m, dp[i]);
		}
		cout << m << endl;
	}
}