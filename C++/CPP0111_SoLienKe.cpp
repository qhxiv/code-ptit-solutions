#include <iostream>
#include <math.h>
using namespace std;

bool check(long long n) {
	while (n>=10) {
		int i = n%10 - (n/10)%10;
		if (i!=1 && i!=-1)
			return false;
		n/=10;
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		if (check(n))
			cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}