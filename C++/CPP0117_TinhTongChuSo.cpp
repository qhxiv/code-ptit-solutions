#include <iostream>
#include <math.h>
using namespace std;

int sum(int n) {
	if (n<10)
		return n;
	int s = 0;
	while (n) {
		s+=n%10;
		n/=10;
	}
	return sum(s);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << sum(n) << endl;
	}
	return 0;
}