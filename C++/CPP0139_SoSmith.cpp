#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int prime[100001];

void sieve() {
	for (int i=2; i<=100000; i++)
		prime[i] = 1;
	for (int i=2; i<=sqrt(100000); i++)
		if (prime[i])
			for (int j=i*i; j<=100000; j+=i)
				prime[j] = 0;
}

int sod(int n) {
	int sum = 0;
	while (n) {
		sum += n%10;
		n/=10;
	}
	return sum;
}

bool check(int n) {
	if (prime[n])
		return 0;
	int sum1 = 0, sum2 = 0;
	sum1 = sod(n);
	for (int i=2; i<=sqrt(n); i++) {
		while (n%i==0) {
			sum2 += sod(i);
			n/=i;
		}
	}
	if (n!=1)
		sum2 += sod(n);
	return sum1 == sum2;
}

int main() {
	sieve();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (!check(n))
			cout << "NO";
		else cout << "YES";
		cout << endl;
	}
	return 0;
}