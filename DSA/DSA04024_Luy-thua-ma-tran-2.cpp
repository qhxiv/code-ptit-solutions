#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9+7;
struct matrix {ll dat[11][11] = {0};};
matrix unit;

void generate_unit() {
	for (int i=1;i<=10;i++)
		unit.dat[i][i] = 1;
}

matrix mm(matrix a, matrix b, int n) {
	matrix res;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			for (int k=1;k<=n;k++)
				res.dat[i][j] += ((a.dat[i][k] % mod)*(b.dat[k][j] % mod))%mod;
	return res;
}

matrix bp(matrix a, int n, int k) {
	if (k==1) return a;
	if (k==0) return unit;
	matrix x = bp(a, n, k/2);
	if (k%2==0) return mm(x, x, n);
	else return mm(mm(x, x, n), a, n);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	generate_unit();
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		matrix a;
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				cin >> a.dat[i][j];
		matrix res = bp(a, n, k);
		ll ans = 0;
		for (int i=1;i<=n;i++) {
			ans += res.dat[i][n]%mod;
			ans %= mod;
		}
		cout << ans << endl;
	}
}