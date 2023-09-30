#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9+7;
struct matrix {
	ll dat[2][2] = {0};
	matrix() {
		dat[1][1] = 0;
		dat[0][0] = dat[0][1] = dat[1][0] = 1;
	}
};
matrix unit;

void generate_unit() {
	unit.dat[0][0] = unit.dat[1][1] = 1;
	unit.dat[0][1] = unit.dat[1][0] = 0;
}

matrix mm(matrix a, matrix b) {
	matrix res;
	for (int i=0;i<=1;i++)
		for (int j=0;j<=1;j++)
			res.dat[i][j] = 0;
	for (int i=0;i<=1;i++)
		for (int j=0;j<=1;j++)
			for (int k=0;k<=1;k++) {
				res.dat[i][j] += (a.dat[i][k] % mod)*(b.dat[k][j] % mod);
				res.dat[i][j] %= mod;
			}
	return res;
}

matrix bp(matrix a, int k) {
	if (k==1) return a;
	if (k==0) return unit;
	matrix x = bp(a, k/2);
	if (k%2==0) return mm(x, x);
	else return mm(mm(x, x), a);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	generate_unit();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		matrix a;
		matrix res = bp(a, n);
		cout << res.dat[0][1] << endl;
	}
}