#include <iostream>

using namespace std;

bool f[1001];

void sieve() {
	int a = 0, b = 1;
	int res = 0;
	while (res<=1000) {
		f[res]=1;
		res = a + b;
		a = b;
		b = res;
	}
}

int main() {
	sieve();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
			if (f[a[i]])
				cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}