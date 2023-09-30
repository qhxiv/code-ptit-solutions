#include <iostream>
#define ll long long

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int count[10] = {0};
		int n;
		cin >> n;
		ll a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
			ll tmp = a[i];
			while (tmp) {
				count[tmp%10] = 1;
				tmp/=10;
			}
		}
		for (int i=0; i<10; i++)
			if (count[i]==1)
				cout << i << " ";
		cout << endl;
	}
	return 0;
}
