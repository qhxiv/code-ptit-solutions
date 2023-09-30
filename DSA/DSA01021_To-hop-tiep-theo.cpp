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
		set<int> s;
		for (int i=1;i<=k;i++) {
			cin >> a[i];
			s.insert(a[i]);
		}
		vector<int> b(a, a+k+1);
		int i = k;
		while (b[i]==i+n-k && i>=1)
			i--;
		if (i==0)
			cout << k;
		else {
			b[i]++;
			for (int j=i+1;j<=k;j++)
				b[j] = b[j-1] + 1;
			int cnt = 0;
			for (int i=1;i<=k;i++) {
				if (s.count(b[i])==0)
					cnt++;
			}
			cout << cnt;
		}
		cout << endl;
	}
	return 0;
}