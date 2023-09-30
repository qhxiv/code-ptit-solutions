#include <iostream>
#include <math.h>
using namespace std;

bool chiaDu(long long n, long long k) {
	long long res;
	if (n<k)
		res = (1+n)*n/2;
	long long t = k-((n/k+1)*k-n);
	long long a = ((1+(k-1))*(k-1)/2)*(n/k);
	long long b = (1+t)*t/2;
	res = a + b;
	return k==res;
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