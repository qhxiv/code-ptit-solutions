#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b) {
	if (b==0)
		return a;
	return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
	return a*b / gcd(a, b);
}

class PhanSo {
	private:
		ll t, m;
	public:
		PhanSo(ll, ll);
		void rutgon();
		friend istream& operator >> (istream&, PhanSo&);
		friend ostream& operator << (ostream&, PhanSo);
		PhanSo operator + (PhanSo another);
};

istream& operator >> (istream &in, PhanSo &a) {
	in >> a.t >> a.m;
	return in;
}

ostream& operator << (ostream &out, PhanSo a) {
	out << a.t << "/" << a.m;
	return out;
}

PhanSo PhanSo::operator + (PhanSo another) {
	PhanSo tong(1, 1);
	ll b = lcm(this->m, another.m);
	tong.m = b;
	tong.t = this->t*(b/this->m) + another.t*(b/another.m);
	tong.rutgon();
	return tong;
}

PhanSo::PhanSo(ll a, ll b) {
	t = a; m = b;
}

void PhanSo::rutgon() {
	ll u = gcd(abs(t), abs(m));
	t /= u;
	m /= u;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
