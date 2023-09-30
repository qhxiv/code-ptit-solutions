#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[k+1];
		a[0] = 0;
		for (int i=1;i<=k;i++) cin >> a[i];
		int i = k;
		while (a[i]==a[i-1]+1 && i>0) i--;
		if (i==0) for (int i=1;i<=k;i++) cout << i+n-k << ' ';
		else {
			a[i]--;
			for (int j=i+1;j<=k;j++) a[j] = j+n-k;
			for (int j=1;j<=k;j++) cout << a[j] << ' ';
		}
		cout << endl;
	}
	return 0;
}