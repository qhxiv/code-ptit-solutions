#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		vector<vector<int>> v;
		for (int &x : a) cin >> x;
		for (int i=0;i<n-1;i++) {
			for (int j=i+1;j<n;j++)
				if (a[j]<a[i])
					swap(a[i], a[j]);
			vector<int> x(a, a+n);
			v.push_back(x);
		}
		reverse(v.begin(), v.end());
		int cnt = n;
		for (auto x : v) {
			cnt--;
			cout << "Buoc " << cnt << ": ";
			for (int y : x)
				cout << y << ' ';
			cout << endl;
		}
	}
	return 0;
}