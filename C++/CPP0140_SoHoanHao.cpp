#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

ll hh[8];

bool nt (int n) {
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0)
			return 0;
	return n>1;
}

void generator() {
	int j = 0;
	for (int i=1; i<=31; i++) {
		if (nt(i)&&nt(pow(2, i)-1)) {
			hh[j] = pow(2, i-1)*(pow(2, i)-1);
			j++;
		}
	}
}

bool check(ll n) {
	for (int i=0; i<8; i++)
		if (n==hh[i])
			return 1;
	return 0;
}

int main() {
	generator();
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		cout << check(n) << endl;
	}
	return 0;
}