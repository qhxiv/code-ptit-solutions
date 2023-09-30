#include <iostream>
#include <math.h>
using namespace std;

int legendre(int n, int p) {
	int res = 0;
	for (int i=p; i<=n; i*=p)
		res += n/i;
	return res;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, p;
		cin >> n >> p;
		cout << legendre(n, p) << endl;
	}
	return 0;
}