#include <iostream>

using namespace std;

int count[1000001];

int main() {
	int t;
	cin >> t;
	while (t--) {
		for (int i=0;i<=1000000;i++)
			count[i] = -1;
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
			count[a[i]] = 1;
		}
		cout << count[x] << endl;
	}
	return 0;
}

