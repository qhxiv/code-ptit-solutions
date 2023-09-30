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
		cout << '[';
		for (int i=0;i<n;i++) {
			cout << a[i];
			if (i<n-1)
				cout << ' ';
		}
		cout << "]\n";
		int j = 1;
		while (j<n) {
			for (int i=n-1;i>=j;i--)
				a[i] += a[i-1];
			cout << '[';
			for(int i=j;i<n;i++) {
				cout << a[i];
				if (i<n-1)
					cout << ' ';
			}
			cout << "]\n";
			j++;
		}
	}
	return 0;
}