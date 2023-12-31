#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int l, r;
		for (int i=0;i<n-1;i++)
			if (a[i]>a[i+1]) {
				l = i;
				break;
			}
		for (int i=n-1;i>0;i--)
			if (a[i]<a[i-1]) {
				r = i;
				break;
			}
		if (l>=r) {
			cout << 1 << " " << 1;
		} else {
			int mi = *min_element(a+l, a+r+1);
			int ma = *max_element(a+l, a+r+1);
			for (int i=0;i<=l;i++)
				if (a[i]>mi) {
					l = i;
					break;
				}
			for (int i=n-1;i>=r;i--)
				if (a[i]<ma) {
					r = i;
					break;
				}
			cout << l+1 << " " << r+1;
		}
		cout << endl;
	}
	return 0;
}