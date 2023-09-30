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

void rutgon(PhanSo &a) {
	ll r = ucln(a.t, a.m);
	a.t /= r;
	a.m /= r;
}

void in(PhanSo a) {
	cout << a.t << "/" << a.m;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}