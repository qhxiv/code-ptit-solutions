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
		ll n;
		cin >> n;
		int count = 0;
		for (int i=1; i<=sqrt(n); i++)
			if (prime[i])
				count++;
		cout << count << endl;
	}
	return 0;
}