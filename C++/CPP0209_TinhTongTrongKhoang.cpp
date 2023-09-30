#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, q, l, r;
		cin >> n >> q;
		int a[n], presum[n];
		cin >> a[0];
		presum[0] = a[0];
		for (int i=1; i<n; i++) {
			cin >> a[i];
			presum[i] = presum[i-1] + a[i];
		}
		for (int i=0; i<q; i++) {
			cin >> l >> r;
			if (l==1)
				cout << presum[r-1];
			else cout << presum[r-1] - presum[l-2];
			cout << endl;
		}
	}
	return 0;
}
