#include <bits/stdc++.h>

using namespace std;

int n, a[100][100];
vector<string> v;
string tmp = "";

void Try(int i, int j) {
	if (a[i][j+1]==1) {
		tmp = tmp + 'R';
		Try(i, j+1);
	}
	if (a[i+1][j]==1) {
		tmp = tmp + 'D';
		Try(i+1, j);
	}
	if (i==n && j==n)
		v.push_back(tmp);
	if (tmp.size()>0)
		tmp.erase(tmp.size()-1, 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		v.clear();
		cin >> n;
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				cin >> a[i][j];
		if (a[1][1]==0) {
			cout << -1 << endl;
			continue;
		}
		Try(1, 1);
		if (v.size()==0)
			cout << -1;
		else {
			sort(v.begin(), v.end());
			for (string x : v)
				cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}