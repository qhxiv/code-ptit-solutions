#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	ll f[100] = {0};
	f[1] = f[2] = 1;
	for (int i=3;i<93;i++) f[i] = f[i-1] + f[i-2];
	int t; cin >> t;
	while (t--) {
		int n; ll k;
		cin >> n >> k;
		while (n>2) {
			if (k>f[n-2]) {
				k -= f[n-2];
				n--;
			} else {
				n-=2;
			}
		}
		if (n==1) cout << '0';
		else cout << '1';
		cout << endl;
	}
	return 0;
}