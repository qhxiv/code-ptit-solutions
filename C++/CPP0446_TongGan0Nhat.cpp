#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int i=0;i<n;i++)
			cin >> a[i];
		int res, rec = 1e7;
		for (int i=0;i<n-1;i++) {
			for (int j=i+1;j<n;j++) {
				if (abs(a[i]+a[j])<rec) {
					rec = abs(a[i] + a[j]);
					res = a[i] + a[j];
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}

