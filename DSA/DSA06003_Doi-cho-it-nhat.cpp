#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int cnt = 0;
		for (int i=0;i<n-1;i++) {
			int m = i;
			for (int j=i+1;j<n;j++)
				if (a[j]<a[m])
					m = j;
			if (m!=i) {
				cnt++;
				swap(a[i], a[m]);
			}
		}
		cout << cnt << endl;
	}
	return 0;
}