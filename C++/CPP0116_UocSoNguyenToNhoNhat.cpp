#include <iostream>
#include <math.h>
using namespace std;

int prime[10001];

void sieve() {
	prime[1] = 1;
	for (int i=2; i<=10000; i++)
		prime[i] = i;
	for (int i=2; i<=100; i++)
		if (prime[i] == i)
			for (int j=i*i; j<=10000; j+=i)
				if (prime[j]==j)
					prime[j] = i;
}

int main() {
	sieve();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i=1; i<=n; i++)
			cout << prime[i] << " ";
		cout << endl;
	}
	return 0;
}