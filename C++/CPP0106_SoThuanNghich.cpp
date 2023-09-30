#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t, d, e;
	long long n, a, b, c;
	cin >> t;
	while (t--) {
		d = 0;
		cin >> a;
		n = a;
		while (n>0) {
			d++;
			n /= 10;
		}
		n = a % (int)(pow(10, d/2));
		b = 0;
		for (int i=1; i<=d/2; i++) {
			c = (n % 10) * pow(10, d/2 - i);
			b += c;
			n /= 10;
		}
		if (d%2==0)
			e = d/2;
		else e = d/2 + 1;
		if (b != (int)(a / pow(10, e)))
			cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}