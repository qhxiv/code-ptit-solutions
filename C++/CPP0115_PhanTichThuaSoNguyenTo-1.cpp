#include <iostream>
#include <math.h>
using namespace std;

int prime[10001];

void sieve() {
	for (int i=2; i<=10000; i++)
		prime[i] = i;
	for (int i=2; i<=sqrt(10000); i++) {
		if (prime[i] == i) {
			for (int j=i*i; j<=10000; j+=i) {
				if (prime[j] == j)
					prime[j] = i;
			}
		}
	}
}

int pt(int n) {
	if (n<=1)
		return 0;
	while (n!=1) {
		int tmp = prime[n];
		int count = 0;
		while (n%tmp == 0) {
			count ++;
			n/=tmp;
		}
		cout << tmp << " " << count << " ";
	}
	cout << endl;
	return 0;
}

int main() {
	sieve();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		pt(n);
	}
	return 0;
}