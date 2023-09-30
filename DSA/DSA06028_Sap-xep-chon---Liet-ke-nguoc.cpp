#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	vector<vector<int>> v;
	for (int i=0;i<n-1;i++) {
		int m = i;
		for (int j=i+1;j<n;j++)
			if (a[j]<a[m])
				m = j;
		swap(a[i], a[m]);
		vector<int> x(a, a+n);
		v.push_back(x);
	}
	reverse(v.begin(), v.end());
	for (auto x : v) {
		n--;
		cout << "Buoc " << n << ": ";
		for (int y : x)
			cout << y << ' ';
		cout << endl;
	}
	return 0;
}