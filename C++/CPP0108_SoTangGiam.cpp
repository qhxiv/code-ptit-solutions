#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

bool tang(ll n) {
	while (n>=10) {
		if ((n%10)<=(n/10)%10)
			return 0;
		n/=10;
	}
	return 1;
}

bool giam(ll n) {
	while (n>=10) {
		if ((n%10)>=(n/10)%10)
			return 0;
		n/=10;
	}
	return 1;
}

bool nt(ll n) {
	for (ll i=2; i<=sqrt(n); i++)
		if (n%i==0)
			return 0;
	return n>1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int d, count = 0;
		cin >> d;
		ll a = pow(10, d-1);
		ll b = pow(10, d) - 1;
		for (ll i=a; i<=b; i++) {
			if (tang(i)||giam(i))
				if (nt(i))
					count++;
		}
		cout << count << endl;
	}
	return 0;
}