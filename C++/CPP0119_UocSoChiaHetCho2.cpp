#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int solve(int n) {
	if (n%2!=0)
		return 0;
	n/=2;
	int count = 0;
	int tmp = sqrt(n);
	for (int i=1; i<=tmp; i++)
		if (n%i==0)
			count+=2;
	if (tmp*tmp == n)
		count--;
	return count;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}