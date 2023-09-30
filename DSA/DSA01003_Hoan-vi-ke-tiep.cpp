#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n+1];
		for (int i=1;i<=n;i++)
			cin >> a[i];
		int i = n-1;
		while (a[i]>a[i+1] && i>=1)
			i--;
		if (i==0)
			for (int j=1;j<=n;j++)
				cout << j << " ";
		else {
			int j = n;
			while (a[j]<a[i])
				j--;
			swap(a[i], a[j]);
			reverse(a+i+1, a+n+1);
			for (int j=1;j<=n;j++)
				cout << a[j] << " ";
		}
		cout << endl;
	}
	return 0;
}