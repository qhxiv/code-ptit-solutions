#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int solve(int n) {
	if (n==1)
		return 1;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0)
			return i;
	return n;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i=1; i<=n; i++)
			cout << solve(i) << " ";
		cout << endl;
	}
	return 0;
}