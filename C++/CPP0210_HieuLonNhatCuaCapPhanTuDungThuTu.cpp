#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		int max = -99999;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n-1;i++) {
			for (int j=i+1;j<n;j++) {
				if (a[j]>a[i] && max < a[j]-a[i])
					max = a[j] - a[i];
			}
		}
		if (max==-99999) max = -1;
		cout << max << endl;
	}
	return 0;
}

