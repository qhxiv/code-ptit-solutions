#include <iostream>
#include <math.h>
using namespace std;

bool nt(int n) {
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0)
			return 0;
	return n>1;
}

bool p(int n) {
	int res = n;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) {
			res -= res/i;
			while (n%i==0)
				n/=i;
		}
	}
	if (n!=1)
		res -= res/n;
	if (!nt(res))
		return 0;
	return 1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << p(n) << endl;
	}
	return 0;
}