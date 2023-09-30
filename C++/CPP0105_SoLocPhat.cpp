#include <iostream>
using namespace std;

int main() {
	int t, n;
	bool test;
	cin >> t;
	while (t--) {
		cin >> n;
		test = true;
		while (n>0) {
			if (n%10 != 0 && n%10 != 6 && n%10!= 8)
				test = false;
			if (test == false) {
				cout << "NO" << endl;
				break;
			}
			n/=10;
		}
		if (test)
			cout << "YES" << endl;	
	}
	return 0;
}