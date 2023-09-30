#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, m, test = 1;
		cin >> a >> m;
		for (int i=0; i<=m-1; i++) {
			if ((a*i)%m == 1) {
				test = 0;
				cout << i << endl;
				break;
			}
		}
		if (test)
			cout << -1 << endl;
	}
	return 0;
}