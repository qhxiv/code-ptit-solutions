#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int a[n];
		for (int &x : a) cin >> x;
		for (int i=0;i<=n-k;i++)
			cout << *max_element(a+i, a+i+k) << ' ';
		cout << endl;
	}
	return 0;
}