#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[k+1];
		for (int i=1;i<=k;i++)
			cin >> a[i];
		sort(a+1, a+k+1);
		int i = k;
		while (a[i]==i+n-k && i>=1)
			i--;
		if (i==0)
			for (int j=1;j<=k;j++)
				cout << j << " ";
		else {
			a[i]++;
			for (int j=i+1;j<=k;j++)
				a[j] = a[j-1] + 1;
			for (int j=1;j<=k;j++)
				cout << a[j] << " ";
		}
		cout << endl;
	}
	return 0;
}