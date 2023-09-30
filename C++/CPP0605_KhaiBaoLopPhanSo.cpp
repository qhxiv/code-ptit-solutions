#include <bits/stdc++.h>
#define ll long long

using namespace std;

class PhanSo {
	private:
		ll t, m;
	public:
		PhanSo(ll, ll);
		void rutgon();
		friend istream& operator >> (istream&, PhanSo&);
		friend ostream& operator << (ostream&, PhanSo);
};

istream& operator >> (istream &in, PhanSo &a) {
	in >> a.t >> a.m;
	return in;
}

ostream& operator << (ostream &out, PhanSo a) {
	out << a.t << "/" << a.m;
	return out;
}

PhanSo::PhanSo(ll a, ll b) {
	t = a; m = b;
}

ll gcd(ll a, ll b) {
	if (b==0)
		return a;
	return gcd(b, a%b);
}

void PhanSo::rutgon() {
	ll u = gcd(t, m);
	t /= u;
	m /= u;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
