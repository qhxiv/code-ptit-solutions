#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n; cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	bool ok;
	int cnt = 0;
	while (1) {
		cnt++;
		cout << "Buoc " << cnt << ": ";
		ok = 1;
		for (int i=0;i<n-1;i++) {
			if (a[i]>a[i+1]) {
				swap(a[i], a[i+1]);
			}
		}
		for (int i=0;i<n-1;i++) {
			cout << a[i] << ' ';
			if (a[i]>a[i+1])
				ok = 0;
		}
		cout << a[n-1] << endl;
		if (ok)
			break;
	}
	return 0;
}