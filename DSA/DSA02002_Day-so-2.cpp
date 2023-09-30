#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		vector<vector<int>> v(n);
		for (int &x : a) {
			cin >> x;
			v[0].push_back(x);
		}
		reverse(v[0].begin(), v[0].end());
		int j = 1;
		while (j<n) {
			for (int i=n-1;i>=j;i--) {
				a[i] += a[i-1];
				v[j].push_back(a[i]);
			}
			j++;
		}
		reverse(v.begin(), v.end());
		for (auto x : v) {
			cout << '[';
			int m = x.size();
			for (int i=m-1;i>=0;i--) {
				cout << x[i];
				if (i>0)
					cout << " ";
			}
			cout << "] ";
		}
		cout << endl;
	}
	return 0;
}