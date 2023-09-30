#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct PhanSo {
	ll t, m;
};

void nhap(PhanSo &a) {
	cin >> a.t >> a.m;
}

ll ucln(ll a, ll b) {
	if (b==0)
		return a;
	return ucln(b, a%b);
}

ll bcnn(ll a, ll b) {
	return a*b/ucln(a, b);
}

void rutgon(PhanSo &a) {
	ll r = ucln(a.t, a.m);
	a.t /= r;
	a.m /= r;
}

PhanSo tong(PhanSo a, PhanSo b) {
	PhanSo tong;
	ll bc = bcnn(a.m, b.m);
	a.t *= bc/a.m;
	b.t *= bc/b.m;
	tong.t = a.t + b.t;
	tong.m = bc;
	rutgon(tong);
	return tong;
}

void in(PhanSo a) {
	cout << a.t << "/" << a.m;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}