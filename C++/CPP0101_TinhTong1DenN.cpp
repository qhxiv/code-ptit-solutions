#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t>10)
		cin >> t;
	while (t--) {
		cin >> n;
		while (n<=0 || n>1000000000)
			cin >> n;
		cout << (1+(unsigned long long)n)*(unsigned long long)n/2 << endl;
	}
	return 0;
}