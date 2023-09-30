#include <bits/stdc++.h>

using namespace std;

int n, a[100], cot[100], d1[100], d2[100], m = 100, cnt;

void Try(int i) {
	for (int j=1;j<=n;j++) {
		if (cot[j] && d1[n-j+i] && d2[i+j-1]) {
			a[i] = j;
			cot[j] = d1[n-j+i] = d2[i+j-1] = 0;
			if (i==n)
				cnt++;
			else Try(i+1);
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
		cnt = 0;
		cin >> n;
		Try(1);
		cout << cnt << endl;
	}
	return 0;
}