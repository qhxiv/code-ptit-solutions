#include <iostream>
#include <math.h>
using namespace std;

long long remove(long long n) {
	int d = 0;
	long long res = 0;
	while (n!=0) {
		if (n%1000 == 84)
			n/=1000;
		res += (n%10)*pow(10, d);
		d++;
		n/=10;
	}
	return res;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		cout << remove(n) << endl;
	}
	return 0;
}