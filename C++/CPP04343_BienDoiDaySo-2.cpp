#include <iostream>
#define ll long long

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll a[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
		}
		for (int i=0;i<n;i++) {
			ll r;
			if (i==0)
				r = a[i]*a[i+1];
			else if (i==n-1)
				r = a[i]*a[i-1];
			else r = a[i-1]*a[i+1];
			cout << r << " ";
		}
		cout << endl;
	}
	return 0;
}

