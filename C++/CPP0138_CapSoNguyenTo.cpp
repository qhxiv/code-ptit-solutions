#include <iostream>
#include <math.h>
using namespace std;

bool nt(int n) {
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0)
			return 0;
	}
	return n>1;
}

int find(int n) {
	for (int i=2; i<=n; i++) {
		if (nt(n-i) && nt(i)) {
			cout << i << " " << n-i << endl;
			break;
		}	
	}
	return 0;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		find(n);
	}
	return 0;
}