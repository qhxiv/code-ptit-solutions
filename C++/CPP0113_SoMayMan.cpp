#include <iostream>
#include <math.h>
using namespace std;

int special(int n) {
	if (n<86) return 0;
	int a=0;
	if (n%10!=6) return 0;
	n/=10;
	if (n%10!=8) return 0;
	return 1;
}

int main() {
	int t;
	cin >> t;
	while (t>20)
		cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << special(n) << endl;
	}
	return 0;
}