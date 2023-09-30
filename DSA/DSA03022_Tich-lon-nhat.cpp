#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n; cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	sort(a, a+n);
	int r1, r2, r3, r4;
	r1 = a[n-1] * a[n-2] * a[n-3];
	r2 = a[n-1] * a[n-2];
	r3 = a[0] * a[1];
	r4 = a[0] * a[1] * a[n-1];
	cout << max({r1, r2, r3, r4});
	return 0;
}