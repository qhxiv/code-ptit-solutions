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
	for (int i=0;i<n;i++) {
		int p = 0;
		while (a[p]<a[i])
			p++;
		if (p!=i) {
			int tmp = a[i];
			for (int j=i;j>p;j--)
				a[j] = a[j-1];
			a[p] = tmp;
		}
		vector<int> x(a, a+i+1);
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