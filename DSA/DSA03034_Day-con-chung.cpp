#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		vector<ll> a, b, c;
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		ll x;
		for (int i=0;i<n1;i++) {
			cin >> x;
			a.push_back(x);
		}
		for (int i=0;i<n2;i++) {
			cin >> x;
			b.push_back(x);
		}
		for (int i=0;i<n3;i++) {
			cin >> x;
			c.push_back(x);
		}
		int i, j, k;
		i = j = k = 0;
		vector<ll> res;
		while (i<n1 && j<n2 && k<n3) {
			if (a[i]==b[j] && a[i]==c[k]) {
				res.push_back(a[i]);
				i++; j++; k++;
			} else if (a[i]<=b[j] && a[i]<=c[k])
				i++;
			else if (b[j]<=a[i] && b[j]<=c[k])
				j++;
			else if (c[k]<=a[i] && c[k]<=b[j])
				k++;
		}
		if (res.size()==0)
			cout << "NO";
		else {
			sort(res.begin(), res.end());
			for (ll x : res)
				cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}