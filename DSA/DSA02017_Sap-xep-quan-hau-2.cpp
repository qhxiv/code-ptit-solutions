#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n = 8, cot[100], d1[100], d2[100], m = 100;
ll sum, b[9][9], rec;

void Try(int i) {
	for (int j=1;j<=n;j++) {
		if (cot[j] && d1[n-j+i] && d2[i+j-1]) {
			sum += b[i][j];
			cot[j] = d1[n-j+i] = d2[i+j-1] = 0;
			if (i==n)
				rec = max(rec, sum);
			else Try(i+1);
			sum -= b[i][j];
			cot[j] = d1[n-j+i] = d2[i+j-1] = 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		fill(cot+1, cot+m, 1);
		fill(d1+1, d1+m, 1);
		fill(d2+1, d2+m, 1);
		sum = 0;
		rec = -1;
		for (int i=1;i<=8;i++)
			for (int j=1;j<=8;j++)
				cin >> b[i][j];
		Try(1);
		cout << rec << endl;
	}
	return 0;
}