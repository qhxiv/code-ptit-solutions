#include <bits/stdc++.h>
#define ll long long

using namespace std;

int y;

bool cmp(int a, int b) {
	return abs(y-a)<abs(y-b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n >> y;
		int a[n];
		for (int &x : a)
			cin >> x;
		stable_sort(a, a+n, cmp);
		for (int x : a)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}