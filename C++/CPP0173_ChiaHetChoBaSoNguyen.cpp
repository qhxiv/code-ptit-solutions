#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int gcd(int a, int b) {
	if (b==0)
		return a;
	return gcd(b, a%b);
}

ll lcm(int a, int b) {
	return 1ll*a*b/gcd(a, b);
}

ll solve(int x, int y, int z, int n) {
	ll a = lcm(lcm(x, y), z);
	ll l = pow(10, n-1);
	ll r = pow(10, n) - 1;
	if (a>=l && a<=r)
		return a;
	if (a<l) {
		ll ans = (l+a-1)/a*a;
		if (ans>r)
			return -1;
		return ans;
	}
	return -1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int x, y, z, n;
		cin >> x >> y >> z >> n;
		cout << solve(x, y, z, n) << endl;
	}
	return 0;
}