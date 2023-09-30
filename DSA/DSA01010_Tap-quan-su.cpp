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
		vector<int> v;
		for (int i=1;i<=k;i++) {
			cin >> a[i];
			v.push_back(a[i]);
		}
		int i = k;
		while (a[i]==i+n-k && i>=1)
			i--;
		if (i==0)
			cout << k;
		else {
			set<int> s;
			a[i]++;
			for (int j=i+1;j<=k;j++)
				a[j] = a[j-1] + 1;
			for (int j=1;j<=k;j++)
				s.insert(a[j]);
			int cnt = 0;
			for (int x : v)
				if (s.count(x)==0)
					cnt++;
			cout << cnt;
		}
		cout << endl;
	}

	return 0;
}