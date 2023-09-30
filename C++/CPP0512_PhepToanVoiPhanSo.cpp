#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct PhanSo {
	ll tu, mau;
};

ll ucln(ll a, ll b) {
	if (b==0)
		return a;
	return ucln(b, a%b);
}

ll bcnn(ll a, ll b) {
	return a*b/ucln(a, b);
}

void rutgon(PhanSo &a) {
	ll r = ucln(a.tu, a.mau);
	a.tu /= r;
	a.mau /= r;
}

void process(PhanSo a, PhanSo b) {
	PhanSo c, d;
	//tinh phan so c
	ll bc = bcnn(a.mau, b.mau);
	c.tu = a.tu*(bc/a.mau) + b.tu*(bc/b.mau); c.tu = c.tu*c.tu;
	c.mau = bc*bc;
	rutgon(c);

	//tinh phan so d
	d.tu = a.tu * b.tu * c.tu;
	d.mau = a.mau * b.mau * c.mau;
	rutgon(d);

	//in ra c va d
	cout << c.tu << "/" << c.mau;
	cout << " ";
	cout << d.tu << "/" << d.mau;
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}