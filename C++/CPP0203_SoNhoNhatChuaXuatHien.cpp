#include <iostream>

using namespace std;

int count[1000002];

int main() {
	int t;
	cin >> t;
	while (t--) {
		for (int i=0; i<=1000001; i++)
			count[i] = 0;
		int n, max = -1e6-1;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
			if (a[i]>0) {
				count[a[i]]++;
				if (a[i]>max)
					max = a[i];
			}
		}
		for (int i=1; i<=max+1; i++) {
			if (count[i]==0) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
