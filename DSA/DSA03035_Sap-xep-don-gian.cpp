#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n; cin >> n;
	int a[n+1] = {0}, res = -1;
	for (int i=1;i<=n;i++) {
		int x; cin >> x;
		a[x] = a[x-1] + 1;
		res = max(res, a[x]);
	}
	cout << n - res;
	return 0;
}