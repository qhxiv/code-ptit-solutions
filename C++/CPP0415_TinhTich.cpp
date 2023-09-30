#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, min = 1e8+1, max = -1e8-1;
		cin >> n >> m;
		int a[n], b[m];
		for (int i=0; i<n; i++) {
			cin >> a[i];
			if (max<a[i])
				max = a[i];
		}
		for (int i=0; i<m; i++) {
			cin >> b[i];
			if (min>b[i])
				min = b[i];
		}
		cout << 1ll*min*max << endl;
	}
	return 0;
}
