#include <iostream>
#include <math.h>
using namespace std;

bool prime[10001];

void sieve() {
	for (int i=0; i<=10000; i++)
		prime[i] = true;
	prime [0] = prime [1] = false;
	for (int i=2; i<=sqrt(10000); i++)
		if (prime[i])
			for (int j=i*i; j<=10000; j+=i)
				prime[j] = false;
}

int main() {
	sieve();
	int t;
	cin >> t;
	while (t--) {
		int m, n;
		cin >> m >> n;
		for (int i=m; i<=n; i++)
			if (prime[i])
				cout << i << " ";
		cout << endl;
	}
	return 0;
}