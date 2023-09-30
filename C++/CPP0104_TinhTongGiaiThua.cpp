#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	long long p = 1, s = 0;
	cin >> n;
	for (int i=1; i<=n; i++) {
		p *= i;
		s += p;
	}
	cout << s;
	return 0;
}