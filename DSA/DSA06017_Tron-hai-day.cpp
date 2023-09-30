#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for (int i=0;i<n;i++)
			cin >> a[i];
		for (int i=0;i<m;i++)
			cin >> b[i];
		sort(a, a+n);
		sort(b, b+m);
		int i, j;
		i = j = 0;
		while (i<n && j<m) {
			if (a[i]<b[j]) {
				cout << a[i] << " ";
				i++;
			} else {
				cout << b[j] << " ";
				j++;
			}
		}
		while (i<n) {
			cout << a[i] << " ";
			i++;
		}
		while (j<m) {
			cout << b[j] << " ";
			j++;
		}
		cout << endl;
	}
	return 0;
}