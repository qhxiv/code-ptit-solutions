#include <bits/stdc++.h>

using namespace std;

int m, n, a[1000][1000], cnt;

void Try(int i, int j) {
	if (j+1<=n)
		Try(i, j+1);
	if (i+1<=m)
		Try(i+1, j);
	if (i==m && j==n)
		cnt++;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		cnt = 0;
		cin >> m >> n;
		for (int i=1;i<=m;i++)
			for (int j=1;j<=n;j++)
				cin >> a[i][j];
		Try(1, 1);
		cout << cnt << endl;
	}
	return 0;
}