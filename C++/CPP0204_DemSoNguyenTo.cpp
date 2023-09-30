#include <iostream>
#include <math.h>

using namespace std;

bool prime[100001];

void sieve() {
	for (int i=2; i<=100000; i++)
		prime[i] = 1;
	for (int i=2; i<=sqrt(100000); i++)
		if (prime[i])
			for (int j=i*i; j<=100000; j+=i)
				prime[j] = 0;
}

int main() {
	sieve();
	int t;
	cin >> t;
	while (t--) {
		int l, r, ans = 0;
		cin >> l >> r;
		for (int i=l; i<=r; i++)
			if (prime[i])
				ans++;
		cout << ans << endl;
	}
	return 0;
}
