#include <bits/stdc++.h>

using namespace std;

int first_pos(int a[], int l, int r, int x) {
	int res = -1;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m]>x) {
			res = m;
			r = m - 1;
		} else l = m + 1;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n; cin >> n;
	int a[n], dp[n];
	for (int &x : a)
		cin >> x;
	fill(dp, dp+n, -1);
	int l = 0;
	for (int i=0;i<n;i++) {
		int j = first_pos(dp, 0, l, a[i]);
		if (j==-1) {
			dp[l] = a[i];
			l++;
		} else if (!binary_search(dp, dp+l, a[i]))
			dp[j] = a[i];
	}
	cout << l;
	return 0;
}