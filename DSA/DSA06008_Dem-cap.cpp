#include <bits/stdc++.h>

using namespace std;

int find_pos(int a[], int l, int r, int x) {
	int res = -1;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m]>x) {
			res = m;
			r = m - 1;
		} else l = m + 1;
	}
	return res;
}

int count(int x, int b[], int m, int cnt[]) {
	if (x==0)
		return 0;
	else if (x==1)
		return cnt[0];
	int res = 0;
	int p = find_pos(b, 0, m-1, x);
	if (p!=-1)
		res += m - p;
	if (x==2)
		res -= (cnt[3] + cnt[4]);
	else if (x==3)
		res += cnt[2];
	res += cnt[0] + cnt[1];
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m], cnt[5] = {0};
		for (int &x : a) cin >> x;
		for (int &x : b) {
			cin >> x;
			if (x<=4)
				cnt[x]++;
		}
		sort(b, b+m);
		int res = 0;
		for (int x : a)
			res += count(x, b, m, cnt);
		cout << res << endl;
	}
	return 0;
}