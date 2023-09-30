#include <bits/stdc++.h>
#define ll long long
#define pi 3.141592653589793238

using namespace std;

struct point {
	double x, y;
	bool operator == (const point other) {
		return (x==other.x && y==other.y);
	}
	friend istream& operator >> (istream& in, point &a) {
		in >> a.x >> a.y;
		return in;
	}
};

bool check(point a, point b, point c) {
	if (a==b && b==c)
		return 0;
	if (a.x==b.x) {
		if (b.x==c.x)
			return 0;
		else return 1;
	}
	else if (a.y==b.y) {
		if (b.y==c.y)
			return 0;
		else return 1;
	}
	double m = (b.y-a.y)/(b.x-a.x);
	double n = a.y - m*a.x;
	return (m*c.x + n != c.y);
}

double kc(point a, point b) {
	double m = a.x - b.x;
	double n = a.y - b.y;
	return (sqrt(m*m + n*n));
}

double tinh(point d, point e, point f) {
	double a = kc(d, e);
	double b = kc(e, f);
	double c = kc(f, d);
	double p = (a + b + c) / 2;
	double dt = sqrt(p * (p - a) * (p - b) * (p - c));
	double r = a * b * c / (4 * dt);
	return r*r*pi;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		point a, b, c;
		cin >> a >> b >> c;
		if (!check(a, b, c)) {
			cout << "INVALID" << endl;
			continue;
		}
		cout << setprecision(3) << fixed << tinh(a, b, c) << endl;
	}
	return 0;
}