#include <bits/stdc++.h>
#define ll long long

using namespace std;

int cnt[100001];

bool cmp(int a, int b) {
	if (cnt[a] != cnt[b])
		return cnt[a] > cnt[b];
	return a < b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		for (int &x : cnt)
			x = 0;
		int n; cin >> n;
		int a[n];
		for (int &x : a) {
			cin >> x;
			cnt[x]++;
		}
		sort(a, a+n, cmp);
		for (int x : a)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}