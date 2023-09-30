#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k, a[100], cnt;
ll h, b[100], sum;
vector<vector<ll>> res;

void add() {
	vector<ll> x(a+1, a+k+1);
	for (ll &y : x)
		y = b[y];
	res.push_back(x);
}

void Try(int i) {
	for (int j=a[i-1]+1;j<=n;j++) {
		a[i] = j;
		sum += b[j];
		if (i==k && sum==h) {
			cnt++;
			add();
		}
		else Try(i+1);
		sum -= b[j];
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		res.clear();
		cin >> n >> h;
		for (int i=1;i<=n;i++)
			cin >> b[i];
		sort(b+1, b+n+1);
		cnt = sum = 0;
		k = n;
		while (k>=1) {
			Try(1);
			k--;
		}
		if (!cnt)
			cout << -1;
		else {
			sort(res.begin(), res.end());
			for (auto x : res) {
				int m = x.size();
				cout << '[';
				for (int i=0;i<m;i++) {
					cout << x[i];
					if (i<m-1)
						cout << ' ';
				}
				cout << "] ";
			}
		}
		cout << endl;
	}
	return 0;
}