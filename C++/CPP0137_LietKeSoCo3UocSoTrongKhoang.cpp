#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int prime[1000001];

void sieve() {
	for (int i=2; i<=1000000; i++)
		prime[i] = 1;
	for (int i=2; i<=1000; i++)
		if (prime[i])
			for (int j=i*i; j<=1000000; j+=i)
				prime[j] = 0;
}

int main() {
	sieve();
	int t;
	cin >> t;
	while (t--) {
		ll l, r;
		cin >> l >> r;
		int count = 0;
		int a = sqrt(l);
		if (1ll*a*a < l)
			a++;
		for (int i=a; i<=sqrt(r); i++)
			if (prime[i])
				count++;
		cout << count << endl;
	}
	return 0;
}