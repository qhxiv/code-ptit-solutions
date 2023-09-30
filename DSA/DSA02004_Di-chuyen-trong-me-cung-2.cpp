#include <bits/stdc++.h>

using namespace std;

int n, a[50][50];
string x = "";
vector<string> res;

void Try(int i, int j) {
	a[i][j] = 0;
	if (a[i+1][j]==1) {
		x = x + 'D';
		Try(i+1, j);
	}
	if (a[i][j+1]==1) {
		x = x + 'R';
		Try(i, j+1);
	}
	if (a[i-1][j]==1) {
		x = x + 'U';
		Try(i-1, j);
	}
	if (a[i][j-1]==1) {
		x = x + 'L';
		Try(i, j-1);
	}
	if (i==n && j==n)
		res.push_back(x);
	a[i][j] = 1;
	if (x.size()>0)
		x.erase(x.size()-1, 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		fill(a[0], a[0] + 50*50, 0);
		res.clear();
		cin >> n;
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				cin >> a[i][j];
		if (a[1][1]==0) {
			cout << -1 << endl;
			continue;
		}
		Try(1, 1);
		sort(res.begin(), res.end());
		for (string x : res)
			cout << x << ' ';
		if (res.size()==0)
			cout << -1;
		cout << endl;
	}
	return 0;
}