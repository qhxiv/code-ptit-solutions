#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int tt;
		cin >> tt;
		cout << tt << " ";
		string s;
		cin >> s;
		int n = s.size();
		char a[n+1];
		for (int i=1;i<=n;i++)
			a[i] = s[i-1];
		int i = n-1;
		while (a[i]>=a[i+1] && i>=1)
			i--;
		if (i==0)
			cout << "BIGGEST";
		else {
			int j = n;
			while (a[j]<=a[i])
				j--;
			swap(a[i], a[j]);
			reverse(a+i+1, a+n+1);
			for (int j=1;j<=n;j++)
				cout << a[j];
		}
		cout << endl;
	}
	return 0;
}