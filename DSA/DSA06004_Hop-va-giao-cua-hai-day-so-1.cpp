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
		for (int &x : a)
			cin >> x;
		for (int &x : b)
			cin >> x;
		int i = 0, j = 0;
		vector<int> in, un;
		while (i<n && j<m) {
			if (a[i]<b[j]) {
				in.push_back(a[i]);
				i++;
			} else if (a[i]==b[j]) {
				in.push_back(a[i]);
				un.push_back(a[i]);
				i++;
				j++;
			} else {
				in.push_back(b[j]);
				j++;
			}
		}
		while (i<n) {
			in.push_back(a[i]);
			i++;
		}
		while (j<m) {
			in.push_back(b[j]);
			j++;
		}
		for (int x : in)
			cout << x << " ";
		cout << endl;
		for (int x : un)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}