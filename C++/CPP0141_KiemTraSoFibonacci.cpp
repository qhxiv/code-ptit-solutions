#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

ll F[100];

void fibonacci() {
	F[0] = 0;
	F[1] = 1;
	for (int i=2; i<100; i++)
		F[i] = F[i-1] + F[i-2];
}

bool check(ll n) {
	for (int i=0; i<100; i++)
		if (n==F[i])
				return 1;
	return 0;
}

int main() {
	fibonacci();
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		if (!check(n))
				cout << "NO";
		else cout << "YES";
		cout << endl;
	}
	return 0;
}