#include <iostream>

using namespace std;

int count[10000001];

int main() {
	int t;
	cin >> t;
	while (t--) {
		for (int i=0;i<=10000000;i++) count[i] = 0;
		int n;
		cin >> n;
		n--;
		int a[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
			count[a[i]]++;
		}
		for (int i=1;i<=10000000;i++) {
			if (count[i]==0) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}

