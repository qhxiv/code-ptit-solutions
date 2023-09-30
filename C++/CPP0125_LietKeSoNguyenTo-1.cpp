#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n) {
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i == 0)
			return false;
	}
	return n>1;
}

int main() {
	int a,b;
	cin >> a >> b;
	if (a>b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	for (int i=a; i<=b; i++) {
		if (prime(i))
			cout << i << " ";
	}
	return 0;
}