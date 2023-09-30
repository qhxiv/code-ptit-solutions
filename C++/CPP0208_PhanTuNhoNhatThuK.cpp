#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int count[100001] = {0};
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
			count[a[i]]++;
		}
		int i = 1;
		while (i<=100000) {
			while (count[i]!=0) {
				count[i]--;
				k--;
				if (k==0) {
					cout << i << endl;
					break;
				}
			}
			if (k==0) break;
			i++;
		}
	}
	return 0;
}
