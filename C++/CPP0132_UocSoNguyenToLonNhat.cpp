#include <iostream>
#include <math.h>
using namespace std;

long long find(long long n) {
	long long j;
	for (long long i=2; i<=sqrt(n); i++) {
		while (n%i==0) {
			n /= i;
			j  = i;
		}
	}
	if (n!=1)
		return n;
	else return j;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		cout << find(n) << endl;
	}
	return 0;
}