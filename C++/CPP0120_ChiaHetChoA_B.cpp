#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b) {
	if (b==0)
		return a;
	return gcd(b, a%b);
}

int lcm(int a, int b) {
	return a*b/gcd(a, b);
}

int min(int m, int n) {
	if (m<n)
		return m;
	return n;
}

int countLCM(int l, int r, int a, int b) {
	int c = lcm(a,b);
	if (l>c)
		l = (l+c-1)/c*c;
	else l = c;
	int count = 0;
	for (int i=l; i<=r; i+=c)
		count++;
	return count;
}

int count(int l, int r, int a) {
	if (l>a)
		l = (l+a-1)/a*a;
	else l = a;
	int count = 0;
	for (int i=l; i<=r; i+=a)
		count++;
	return count;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		int l = min(m,n);
		int r = m+n - l;
		int res = count(l, r, a) + count(l, r, b) - countLCM(l, r, a, b);
		cout << res << endl;
	}
	return 0;
}