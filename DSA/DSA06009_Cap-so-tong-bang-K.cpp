#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int &x : a)
			cin >> x;
		int cnt = 0;
		for (int i=0;i<n-1;i++)
			for (int j=i+1;j<n;j++)
				if (a[i]+a[j]==k)
					cnt++;
		cout << cnt << endl;
	}
	return 0;
}