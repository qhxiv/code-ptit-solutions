#include <iostream>
#include <math.h>
using namespace std;

int find(int n, int k) {
	for (int i=2; i<=sqrt(n); i++) {
		while (n%i==0 && k!=0) {
			n/=i;
			k--;
		}
		if (k == 0)
			return i;
	}
	if (n!=1 && k==1)
		return n;
	return -1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		if (n<=1) {
			cout << -1 << endl;
			continue;
		}
		cout << find(n, k) << endl;
	}
	return 0;
}