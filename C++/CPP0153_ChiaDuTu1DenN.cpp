#include <iostream>
#include <math.h>
using namespace std;

long long chiaDu(long long n, long long k) {
	if (n<k)
		return (1+n)*n/2;
	long long t = k-((n/k+1)*k-n);
	long long a = ((1+(k-1))*(k-1)/2)*(n/k);
	long long b = (1+t)*t/2;
	return a + b;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, k;
		cin >> n >> k;
		cout << chiaDu(n, k) << endl;
	}
	return 0;
}