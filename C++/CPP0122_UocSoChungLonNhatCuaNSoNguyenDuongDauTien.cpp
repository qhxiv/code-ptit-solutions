#include <iostream>
#include <math.h>
using namespace std;

bool nt(long long n) {
	for (long long i=2; i<=sqrt(n); i++)
		if (n%i==0)
			return 0;
	return n>1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		if (n==1) {
			cout << 1 << endl;
			continue;
		}
		long long p = 1;
		for (long long i=2; i<=n; i++) {
			if (nt(i)) {
				long long j = i;
				while (j<=n)
					j*=i;
			p*=(j/i);
			}
		}
		cout << p << endl;
	}
	return 0;
}